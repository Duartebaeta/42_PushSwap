/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:37:04 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/08 18:20:12 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize(d_list	*lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

void	swap(d_list **stack)
{
	int		tmp;
	d_list	*head;

	head = *stack;
	if (lstsize(head) <= 1)
		return ;
	tmp = head->content;
	head->content = head->next->content;
	head->next->content = tmp;
}