/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:58:00 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 19:45:23 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_lowest_order(td_list **stack_a)
{
	static long		lowest;
	static int		counter;
	long			low_cur;
	td_list		*node;

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

void	just_sort(td_list **stack_a)
{
	td_list	*node;
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

long	bin_convert(int	order)
{
	char	*keep_bin;
	long	returner;
	int		counter;

	keep_bin = (char *) malloc(sizeof(char) * 24);
	if (!keep_bin)
		return (2);
	counter = 0;
	if (order == 0)
		keep_bin[counter++] = '0';
	while (order != 0)
	{
		keep_bin[counter] = (order % 2) + '0';
		order /= 2;
		counter++;
	}
	keep_bin[counter] = '\0';
	returner = ft_atol(strrev(keep_bin));
	free(keep_bin);
	return (returner);
}

void	order_to_bin(td_list **stack_a)
{
	td_list	*node;

	node = *stack_a;
	while (node)
	{
		node->bin = bin_convert(node->order);
		node = node->next;
	}
}

int	get_max_bin(td_list **stack_a)
{
	int	max_order;
	long	temp;
	int		size;
	td_list	*node;

	node = *stack_a;
	size = 0;
	max_order = lstsize(*stack_a) - 1;
	while (node->order != max_order)
		node = node->next;
	temp = node->bin;
	while (temp != 0)
	{
		temp /= 10;
		size++;
	}
	return (size);
}

void	push_and_back(td_list **stack_a, td_list **stack_b)
{
	long	first_rot;
	td_list	*node;

	first_rot = -2147483649;
	while (first_rot != (*stack_a)->content)
	{
		if ((*stack_a)->bin % 10 == 0)
			push(stack_b, stack_a, "pb");
		else
		{
			if (first_rot == -2147483649)
				first_rot = (*stack_a)->content;
			rotate(stack_a, "ra");
		}
	}
	while (lstsize(*stack_b) != 0)
		push(stack_a, stack_b, "pa");
	node = *stack_a;
	while (node)
	{
		node->bin /= 10;
		node = node->next;
	}
}

void	all_sort(td_list **stack_a, td_list **stack_b)
{
	int	max_bin;

	just_sort(stack_a);
	order_to_bin(stack_a);
	max_bin = get_max_bin(stack_a);
	while (max_bin > 0 && is_sorted(stack_a) != 0)
	{
		push_and_back(stack_a, stack_b);
		max_bin--;
	}
}