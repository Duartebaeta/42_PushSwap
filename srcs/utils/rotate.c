/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:27:33 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/16 19:47:29 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	rotate(d_list **stack, char *print)
{
	d_list	*node;
	d_list	*head;

	if (lstsize(*stack) <= 1)
		return ;
	head = *stack;
	node = *stack;
	head->next->prev = NULL;
	*stack = head->next;
	while (node->next)
		node = node->next;
	node->next = head;
	head->prev = node;
	head->next = NULL;
	if (print != NULL)
		ft_printf("%s\n", print);
}
