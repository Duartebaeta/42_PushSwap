/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:23 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 14:56:36 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	ss(td_list **stack_a, td_list **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	ft_printf("ss\n");
}

void	rr(td_list **stack_a, td_list **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_printf("rr\n");
}

void	rrr(td_list **stack_a, td_list **stack_b)
{
	rev_rotate(stack_a, NULL);
	rev_rotate(stack_b, NULL);
	ft_printf("rrr\n");
}