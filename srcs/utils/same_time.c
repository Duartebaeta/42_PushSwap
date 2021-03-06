/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:23 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:28:54 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	ss(t_dlist **stack_a, t_dlist **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	ft_printf("ss\n");
}

void	rr(t_dlist **stack_a, t_dlist **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_printf("rr\n");
}

void	rrr(t_dlist **stack_a, t_dlist **stack_b)
{
	rev_rotate(stack_a, NULL);
	rev_rotate(stack_b, NULL);
	ft_printf("rrr\n");
}
