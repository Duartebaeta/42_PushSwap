/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:24:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:35 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"
# include "utils.h"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"

/* STACK INITIALIZATION */

int		arg_check(int argc, char *argv[]);
t_dlist	*stack_init(char *numbers[]);

/* SORTING */
void	ff_sort(t_dlist **stack_a, t_dlist **stack_b);
int		find_lowest(t_dlist **stack_a);
int		split_med(t_dlist **stack_a, t_dlist **stack_b);
int		rot_check(t_dlist **stack_a, int lindex, int selec);
void	just_sort(t_dlist **stack_a);
int		find_lowest_order(t_dlist **stack_a);
void	order_to_bin(t_dlist **stack_a);
long	bin_convert(int order);
int		get_max_bin(t_dlist **stack_a);
int		closer_to_where(int content, t_dlist **stack_a);
void	push_and_back(t_dlist **stack_a, t_dlist **stack_b);
void	all_sort(t_dlist **stack_a, t_dlist **stack_b);

#endif
