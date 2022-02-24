/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:15:28 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:12 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowest(t_dlist **stack_a)
{
	int		cur_index;
	int		l_index;
	int		small;
	t_dlist	*node;

	cur_index = 0;
	l_index = 0;
	node = *stack_a;
	small = node->content;
	while (node)
	{
		if (node->content < small)
		{
			small = node->content;
			l_index = cur_index;
		}
		cur_index++;
		node = node->next;
	}
	return (l_index);
}

int	rot_check(t_dlist **stack_a, int lindex, int selec)
{
	if (selec == 1)
	{
		while (lindex--)
		{
			rotate(stack_a, "ra");
			if (is_sorted(stack_a) == 0)
				return (2);
		}
	}
	else if (selec == -1)
	{
		lindex = lstsize(*stack_a) - lindex;
		while (lindex--)
		{
			rev_rotate(stack_a, "rra");
			if (is_sorted(stack_a) == 0)
				return (2);
		}
	}
	return (0);
}

int	split_med(t_dlist **stack_a, t_dlist **stack_b)
{
	int	mid_size;
	int	lindex;

	mid_size = (lstsize(*stack_a) / 2);
	while (mid_size)
	{
		lindex = find_lowest(stack_a);
		if (lindex <= (lstsize(*stack_a) / 2))
		{
			if (rot_check(stack_a, lindex, 1) == 2)
				return (2);
		}
		else
		{
			if (rot_check(stack_a, lindex, -1) == 2)
				return (2);
		}
		push(stack_b, stack_a, "pb");
		mid_size--;
	}
	return (0);
}

void	ff_sort(t_dlist **stack_a, t_dlist **stack_b)
{
	if (split_med(stack_a, stack_b) != 2)
		sort(stack_a);
	while (lstsize(*stack_b) != 0)
		push(stack_a, stack_b, "pa");
}
