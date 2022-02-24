/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:27:37 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:00 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	swap(t_dlist **stack, char *print)
{
	int		tmp;
	t_dlist	*head;

	head = *stack;
	if (lstsize(head) <= 1)
		return ;
	tmp = head->content;
	head->content = head->next->content;
	head->next->content = tmp;
	if (print != NULL)
		ft_printf("%s\n", print);
}
