/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:27:18 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:04 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowest_order(t_dlist **stack_a)
{
	static long	lowest;
	static int	counter;
	long		low_cur;
	t_dlist		*node;

	node = *stack_a;
	if (!counter)
	{
		lowest = -2147483649;
		counter = 0;
	}
	low_cur = 2147483648;
	while (node)
	{
		if (node->content < low_cur && node->content > lowest)
			low_cur = node->content;
		node = node->next;
	}
	lowest = low_cur;
	counter++;
	return (low_cur);
}

void	just_sort(t_dlist **stack_a)
{
	t_dlist	*node;
	int		order;
	int		find;

	order = 0;
	while (order < lstsize(*stack_a))
	{
		node = *stack_a;
		find = find_lowest_order(stack_a);
		while (node->content != find)
			node = node->next;
		node->order = order;
		order++;
	}
}
