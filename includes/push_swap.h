/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:24:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 17:37:59 by dhomem-d         ###   ########.fr       */
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

int		arg_check(int argc, char *argv[]);
int		find_median(td_list **stack_a);
void	ff_sort(td_list **stack_a, td_list **stack_b);
int		find_lowest(td_list **stack_a);
int		split_med(td_list **stack_a, td_list **stack_b);
int		rot_check(td_list **stack_a, int lindex, int selec);
void	just_sort(td_list **stack_a);
int		find_lowest_order(td_list **stack_a);
void	order_to_bin(td_list **stack_a);
long	bin_convert(int	order);
int		get_max_bin(td_list **stack_a);
int		closer_to_where(int content, td_list **stack_a);
void	push_and_back(td_list **stack_a, td_list **stack_b, int mult);
void	all_sort(td_list **stack_a, td_list **stack_b);

#endif
