/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:03:08 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 17:40:01 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_sort(td_list **stack)
{
	td_list	*head;

	head = *stack;
	if (head->content > head->next->content)
		swap(stack, "sa");
}

void	three_sort(td_list **stack)
{
	td_list	*head;

	head = *stack;
	if (head->content < head->next->content
		&& head->content > head->next->next->content)
		rev_rotate(stack, "rra");
	else if (head->content > head->next->content
		&& head->content < head->next->next->content)
		swap(stack, "sa");
	else if (head->content > head->next->content
		&& head->content > head->next->next->content
		&& head->next->content < head->next->next->content)
		rotate(stack, "ra");
	else
	{
		swap(stack, "sa");
		if (head->next->content > head->content)
			rev_rotate(stack, "rra");
		else
			rotate(stack, "ra");
	}
}

int	sort(td_list **stack_a)
{
	td_list	**stack_b;
	int		size;

	size = lstsize(*stack_a);
	stack_b = (td_list **) malloc(sizeof(td_list *));
	if (!stack_b)
		return (2);
	if (is_sorted(stack_a) == 0)
		return (0);
	if (size == 2)
		two_sort(stack_a);
	else if (size == 3)
		three_sort(stack_a);
	else if (size >= 4 && size <= 5)
		ff_sort(stack_a, stack_b);
	else if (size > 5)
		all_sort(stack_a, stack_b);
	if (is_sorted(stack_a) == 0)
		return (0);
	return (1);
}
