/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:48:46 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:28:20 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	free_stack(t_dlist **stack)
{
	t_dlist	*node;
	t_dlist	*next;

	if (*stack == NULL)
	{
		free(stack);
		return ;
	}
	node = *stack;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
