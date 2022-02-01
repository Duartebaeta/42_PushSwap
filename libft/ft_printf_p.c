/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:43:34 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/28 11:27:58 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_p(unsigned long data)
{
	static int	counter;

	counter = 0;
	if (data / 16 != 0)
	{
		ft_printf_p(data / 16);
		ft_putchar_fd(change_base(data % 16, 0), 1);
		counter++;
	}
	else
	{
		ft_putchar_fd(change_base(data % 16, 0), 1);
		counter++;
	}
	return (counter + 2);
}
