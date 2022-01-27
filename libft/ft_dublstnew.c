/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dublstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:25:26 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/27 16:45:11 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

d_list	*ft_dublstnew(void *content)
{
	d_list	*new;
	
	new = (d_list *) malloc(sizeof(d_list));
	if (!new)
		return (NULL);
	new->previous = NULL;
	new->content = content;
	new->next = NULL;
	return (new);
}
