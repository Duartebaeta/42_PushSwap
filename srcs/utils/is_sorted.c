/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:25:11 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 19:56:36 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

int	is_sorted(td_list **stack)
{
	td_list	*node;

	node = *stack;
	node = node->next;
	while (node != NULL)
	{
		if (node->content < node->prev->content)
			return (1);
		node = node->next;
	}
	return (0);
}

int	is_revsorted(td_list **stack)
{
	td_list	*node;

	node = *stack;
	node = node->next;
	while (node != NULL)
	{
		if (node->content > node->prev->content)
			return (1);
		node = node->next;
	}
	return (0);
}
