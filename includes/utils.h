/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:39 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"
# include "push_swap.h"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"

void	swap(t_dlist **stack, char *print);
void	push(t_dlist **receive, t_dlist **push, char *print);
void	rotate(t_dlist **stack, char *print);
void	rev_rotate(t_dlist **stack, char *print);
long	ft_atol(const char *str);
void	printlst(t_dlist **lst);
int		lstsize(t_dlist	*lst);
int		is_sorted(t_dlist **stack);
void	two_sort(t_dlist **stack);
int		sort(t_dlist **stack_a);
void	three_sort(t_dlist **stack);
void	ss(t_dlist **stack_a, t_dlist **stack_b);
void	rr(t_dlist **stack_a, t_dlist **stack_b);
void	rrr(t_dlist **stack_a, t_dlist **stack_b);
char	*strrev(char *string);
int		is_order_sorted(t_dlist **stack);
void	free_stack(t_dlist **stack);

#endif