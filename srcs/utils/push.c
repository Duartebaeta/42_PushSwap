/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:26:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/16 19:47:35 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

static void	thankyou_norminette(d_list *head_push, d_list **push, d_list **receive)
{
	if (head_push->next)
	{
		head_push->next->prev = NULL;
		*push = head_push->next;
	}
	*receive = head_push;
	head_push->next = NULL;
}

void	push(d_list **receive, d_list **push, char *print)
{
	d_list	*head_rec;
	d_list	*head_push;

	head_rec = *receive;
	head_push = *push;
	if (lstsize(*push) == 0)
		return ;
	if (head_rec)
	{
		if (head_push->next)
		{
			head_push->next->prev = NULL;
			*push = head_push->next;
		}
		head_push->next = head_rec;
		head_rec->prev = head_push;
		*receive = head_push;
	}
	else
		thankyou_norminette(head_push, push, receive);
	ft_printf("%s\n", print);
}
