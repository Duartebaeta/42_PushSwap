/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:20:48 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/09 15:39:36 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	printlst(d_list **lst)
{
	d_list	*node;
	
	node = *lst;
	while (node != NULL)
	{
		ft_printf("%i\n", node->content);
		node = node->next;
	}
}