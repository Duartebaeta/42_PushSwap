/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:32:56 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/04 18:02:38 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(int num, int index, char *argv[])
{
	int	counter;

	counter = 1;
	while (counter < index)
	{
		if (num == ft_atoi(argv[counter]))
		{
			ft_printf(RED "There can be no duplicates!" BLK);
			return (1);
		}
		counter++;
	}
	return (0);
}

int	is_digit(int argc, char *argv[])
{
	int	counter;
	int	subcounter;

	counter = 1;
	subcounter = 0;
	while (counter < argc)
	{
		while (argv[counter][subcounter])
		{
			if (argv[counter][subcounter] == '-' || argv[counter][subcounter] == '+')
				subcounter++;
			if (argv[counter][subcounter] < '0' ||
				argv[counter][subcounter] > '9')
			{
				ft_printf(RED "Arguments should only contain digits!\n" BLK);
				return (1);
			}
			subcounter++;
		}
		counter++;
		subcounter = 0;
	}
	return (0);
}

int	arg_check(int argc, char *argv[])
{
	int	counter;

	if (argc <= 2)
	{
		ft_printf(RED "Not enough arguments\n" BLK);
		return (1);
	}
	if (is_digit(argc, argv) != 0)
		return (1);
	counter = 1;
	while (counter < argc)
	{
		if (ft_atol(argv[counter]) > 2147483647 || ft_atol(argv[counter]) < -2147483648)
		{
			ft_printf(RED "Arguments should only be of int type!\n" BLK);
			return (1);
		}
		if (is_dup(ft_atoi(argv[counter]), counter, argv) != 0)
			return (1);
		counter++;
	}
	return (0);
}
