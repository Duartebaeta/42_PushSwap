/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/23 17:32:31 by dhomem-d         ###   ########.fr       */
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

void	swap(td_list **stack, char *print);
void	push(td_list **receive, td_list **push, char *print);
void	rotate(td_list **stack, char *print);
void	rev_rotate(td_list **stack, char *print);
long	ft_atol(const char *str);
td_list	*stack_init(char *numbers[]);
void	printlst(td_list **lst);
int		lstsize(td_list	*lst);
int		is_sorted(td_list **stack);
void	two_sort(td_list **stack);
int		sort(td_list **stack_a);
void	three_sort(td_list **stack);
void	ss(td_list **stack_a, td_list **stack_b);
void	rr(td_list **stack_a, td_list **stack_b);
void	rrr(td_list **stack_a, td_list **stack_b);
int		is_revsorted(td_list **stack);
char	*strrev(char *string);
int		is_order_sorted(td_list **stack);

#endif