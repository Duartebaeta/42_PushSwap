/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:35:13 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/28 16:28:30 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

d_list	**stack_assembler(int count, char *numbers[])
{
	d_list	**stack_a;
	int		counter;

	stack_a = (d_list **) malloc(sizeof(d_list*));
	counter = 1;
	stack_a[counter - 1] = ft_dublstnew(numbers[counter]);
	counter++;
	while (counter < count)
	{
		stack_a[counter - 1] = ft_dublstnew(numbers[counter]);
		ft_dublst_add_back(stack_a, stack_a[counter - 1]);
		counter++;
	}
	return (stack_a);
}
