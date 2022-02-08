/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:24:10 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/08 18:14:36 by duartebaeta      ###   ########.fr       */
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
# define BLK "\e[0;30m"
# define RED "\e[0;31m"

typedef struct sd_list
{
	struct sd_list	*prev;
	int				content;
	struct sd_list	*next;	
}	d_list;

int		is_dup(int num, int index, char *argv[]);
int		is_digit(int argc, char *argv[]);
int		arg_check(int argc, char *argv[]);
long	ft_atol(const char *str);
d_list	*stack_init(char *numbers[]);
void	printlst(d_list **lst);
void	swap(d_list **stack);

#endif
