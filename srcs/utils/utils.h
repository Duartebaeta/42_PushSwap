/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:34 by dhomem-d         ###   ########.fr       */
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
# include "../../libft/libft.h"
# include "../push_swap.h"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"

void	swap(d_list **stack, char *print);
void	push(d_list **receive, d_list **push, char *print);
void	rotate(d_list **stack, char *print);
void	rev_rotate(d_list **stack, char *print);
long	ft_atol(const char *str);
d_list	*stack_init(char *numbers[]);
void	printlst(d_list **lst);
int		lstsize(d_list	*lst);
int		is_sorted(d_list **stack);
void	two_sort(d_list **stack);
void	sort(d_list **stack_a);
void	three_sort(d_list **stack);
void	ss(d_list **stack_a, d_list **stack_b);
void	rr(d_list **stack_a, d_list **stack_b);
void	rrr(d_list **stack_a, d_list **stack_b);
int		is_revsorted(d_list **stack);

#endif