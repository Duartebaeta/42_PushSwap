/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:03:08 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 17:05:50 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_sort(t_dlist **stack)
{
	t_dlist	*head;

	head = *stack;
	if (head->content > head->next->content)
		swap(stack, "sa");
}

void	three_sort(t_dlist **stack)
{
	t_dlist	*head;

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

int	sort(t_dlist **stack_a)
{
	t_dlist	**stack_b;
	int		size;

	size = lstsize(*stack_a);
	stack_b = (t_dlist **) malloc(sizeof(t_dlist *));
	if (!stack_b)
		return (2);
	*stack_b = NULL;
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
	{
		free(stack_b);
		return (0);
	}
	free(stack_b);
	return (1);
}
