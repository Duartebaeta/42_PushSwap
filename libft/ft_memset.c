/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:57:14 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/15 19:15:40 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newbing;
	unsigned char	new;

	new = c;
	newbing = (unsigned char *)b;
	while (len != 0)
	{
		*newbing = new;
		len--;
		newbing++;
	}
	return (b);
}
