/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:48:12 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/28 11:28:14 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd((number % 10) + '0', fd);
	}
	else
		ft_putchar_fd((number + '0'), fd);
}
