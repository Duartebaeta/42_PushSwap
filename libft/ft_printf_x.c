/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:42:07 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/28 11:28:07 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_x(unsigned int data, int selec)
{
	static int	counter;

	counter = 0;
	if (data / 16 != 0)
	{
		ft_printf_x(data / 16, selec);
		ft_putchar_fd(change_base(data % 16, selec), 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(change_base(data % 16, selec), 1);
		counter++;
	}
	return (counter);
}
