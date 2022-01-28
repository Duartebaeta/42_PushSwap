/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:45:22 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/14 15:27:34 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_di(int data)
{
	int	counter;

	counter = 0;
	ft_putnbr_fd(data, 1);
	if (data < 0)
		counter++;
	if (data == 0)
		return (1);
	while (data != 0)
	{
		data /= 10;
		counter++;
	}
	return (counter);
}
