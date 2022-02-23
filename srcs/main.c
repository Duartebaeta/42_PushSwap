/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:31:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 19:53:03 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char *argv[])
{
	td_list	**stack_a;

	if (arg_check(argc, argv) != 0)
		return (1);
	stack_a = (td_list**) malloc(sizeof(td_list*));
	if (!stack_a)
		return (2);
	*stack_a = stack_init(argv);
	sort(stack_a);
	return 0;
}
