/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:31:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/08 18:15:57 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	d_list	**stack_a;

	if (arg_check(argc, argv) != 0)
		return (1);
	stack_a = (d_list**) malloc(sizeof(d_list*));
	if (!stack_a)
		return (2);
	*stack_a = stack_init(argv);
	swap(stack_a);
	printlst(stack_a);
	return 0;
}
