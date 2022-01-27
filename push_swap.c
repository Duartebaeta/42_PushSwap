/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:35:13 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/27 17:08:06 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	push_swap();

t_list	**stack_assembler(int count, char *numbers[])
{
	t_list	**stack_a;
	int		counter;

	counter = 1;
	stack_a[counter - 1] = ft_dublstnew(numbers[counter++]);
	while (counter < count)
	{
		stack_a[counter - 1] = ft_dublstnew(numbers[counter]);
		ft_dublst_add_back(stack_a, stack_a[counter - 1]);
		counter++;
	}
	return (stack_a);
}

int main(int argc, char *argv[])
{
	d_list	**stack_a;
	
	if (argc <= 1)
		return 0;
	stack_a = stack_assembler(argc, argv);
	return 0;
}
