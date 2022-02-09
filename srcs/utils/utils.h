/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:32:45 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/09 15:40:31 by dhomem-d         ###   ########.fr       */
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

void	swap(d_list **stack);
void	push(d_list **stack_a, d_list **stack_b);
void	rotate(d_list **stack);
void	rev_rotate(d_list **stack);
long	ft_atol(const char *str);
d_list	*stack_init(char *numbers[]);
void	printlst(d_list **lst);
int		lstsize(d_list	*lst);

#endif