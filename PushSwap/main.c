/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:48:48 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/01/28 16:29:36 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	test(void *t)
{
	write(1, t, 1);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	d_list	**stack_a;
	
	if (argc <= 2)
		return 0;
	stack_a = stack_assembler(argc, argv);
	ft_lstiter(*stack_a, test);
	return 0;
}
