/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:03:08 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/17 20:20:06 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_sort(d_list **stack)
{
	d_list	*head;

	head = *stack;
	if (head->content > head->next->content)
		swap(stack, "sa");
}

void	three_sort(d_list **stack)
{
	d_list	*head;

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

int	sort(d_list **stack_a)
{
	d_list	**stack_b;
	
	stack_b = (d_list **) malloc(sizeof(d_list *));
	if (!stack_b)
		return (2);
	if (is_sorted(stack_a) == 0)
		return (0);
	if (lstsize(*stack_a) == 2)
		two_sort(stack_a);
	else if (lstsize(*stack_a) == 3)
		three_sort(stack_a);
	else if (lstsize(*stack_a) >= 4 && lstsize(*stack_a) <= 5)
		ff_sort(stack_a, stack_b);
	if (is_sorted(stack_a) == 0)
		return (0);
	return (1);
}
