/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:23 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/15 17:45:15 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ss(d_list **stack_a, d_list **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	ft_printf("ss\n");
}

void	rr(d_list **stack_a, d_list **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_printf("rr\n");
}

void	rrr(d_list **stack_a, d_list **stack_b)
{
	rev_rotate(stack_a, NULL);
	rev_rotate(stack_b, NULL);
	ft_printf("rrr\n");
}