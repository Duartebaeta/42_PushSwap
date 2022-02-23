/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:27:29 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 14:56:31 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	rev_rotate(td_list **stack, char *print)
{
	td_list	*node;
	td_list	*head;

	if (lstsize(*stack) <= 1)
		return ;
	head = *stack;
	node = *stack;
	while (node->next)
		node = node->next;
	node->prev->next = NULL;
	*stack = node;
	node->next = head;
	head->prev = node;
	if (print != NULL)
		ft_printf("%s\n", print);
}
