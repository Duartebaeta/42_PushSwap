/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:20:48 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/24 16:28:32 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	printlst(t_dlist **lst)
{
	t_dlist	*node;

	node = *lst;
	while (node != NULL)
	{
		ft_printf("%i\n", node->content);
		node = node->next;
	}
}
