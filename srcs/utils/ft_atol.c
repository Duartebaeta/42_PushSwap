/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:45:16 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/09 15:39:44 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_spaces(const char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] == '\t' || string[counter] == '\n'
		|| string[counter] == '\v' || string[counter] == '\f'
		|| string[counter] == '\r' || string[counter] == ' ')
	{
		counter++;
	}
	return (counter);
}

static int	ft_check(const char *string, int starter)
{
	int	len;

	len = 0;
	if (string[starter] == '-' || string[starter] == '+')
	{
		if (string[starter + 1] >= '0' && string[starter + 1] <= '9')
		{
			len++;
			starter++;
		}
	}
	while ((string[starter] >= '0' && string[starter] <= '9'))
	{
		len++;
		starter++;
	}
	return (len);
}

long	ft_atol(const char *str)
{
	int		len;
	int		mult;
	long	number;
	int		counter;

	mult = 1;
	number = 0;
	counter = ft_spaces(str);
	len = ft_check(str, counter) + counter;
	if (len == 0)
		return (0);
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			mult *= -1;
		counter++;
	}
	while (counter < len)
	{
		number += (str[counter] - 48);
		if (counter + 1 < len)
			number *= 10;
		counter++;
	}
	return (number * mult);
}
