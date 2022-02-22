/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:15:28 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/22 14:49:38 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_median(d_list **stack_a)
{
	int		sum;
	int		amount;
	d_list	*node;

	sum = 0;
	amount = 0;
	node = *stack_a;
	while (node != NULL)
	{
		sum += node->content;
		amount++;
		node = node->next;
	}
	return (sum / amount);
}

int	find_lowest(d_list **stack_a)
{
	int		cur_index;
	int		l_index;
	int		small;
	d_list	*node;

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

int	rot_check(d_list **stack_a, int lindex, int selec)
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

int	split_med(d_list **stack_a, d_list **stack_b)
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

void	ff_sort(d_list **stack_a, d_list **stack_b)
{
	if (split_med(stack_a, stack_b) == 2)
		return ;
	sort(stack_a);
	while(lstsize(*stack_b) != 0)
		push(stack_a, stack_b, "pa");
}
