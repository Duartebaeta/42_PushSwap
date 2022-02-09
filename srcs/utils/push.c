/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:26:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/09 15:39:27 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	thankyou_norminette(d_list *head_b, d_list **push, d_list **receive)
{
	if (head_b->next)
	{
		head_b->next->prev = NULL;
		*push = head_b->next;
	}
	*receive = head_b;
}

void	push(d_list **receive, d_list **push)
{
	d_list	*head_a;
	d_list	*head_b;

	head_a = *receive;
	head_b = *push;
	if (lstsize(*push) == 0)
		return ;
	if (head_a)
	{
		if (head_b->next)
		{
			head_b->next->prev = NULL;
			*push = head_b->next;
		}
		head_b->next = head_a;
		head_a->prev = head_b;
		*receive = head_b;
	}
	else
		thankyou_norminette(head_b, push, receive);
}
