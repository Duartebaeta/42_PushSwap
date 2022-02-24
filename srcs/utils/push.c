/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:26:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:57:35 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

static void	thankyou_norm(t_dlist *head_push, t_dlist **push, t_dlist **receive)
{
	if (head_push->next)
	{
		head_push->next->prev = NULL;
		*push = head_push->next;
	}
	else
		*push = NULL;
	*receive = head_push;
	head_push->next = NULL;
}

void	push(t_dlist **receive, t_dlist **push, char *print)
{
	t_dlist	*head_rec;
	t_dlist	*head_push;

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
		else
			*push = NULL;
		head_push->next = head_rec;
		head_rec->prev = head_push;
		*receive = head_push;
	}
	else
		thankyou_norm(head_push, push, receive);
	ft_printf("%s\n", print);
}
