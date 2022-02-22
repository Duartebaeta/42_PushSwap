/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:24:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/22 14:47:18 by dhomem-d         ###   ########.fr       */
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
int		find_median(d_list **stack_a);
void	ff_sort(d_list **stack_a, d_list **stack_b);
int		find_lowest(d_list **stack_a);
int		split_med(d_list **stack_a, d_list **stack_b);
int		rot_check(d_list **stack_a, int lindex, int selec);

#endif
