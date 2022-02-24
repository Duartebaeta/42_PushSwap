/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:59:47 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/24 16:29:22 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_dlist	*new_node(int content, t_dlist *prev)
{
	t_dlist	*new;

	new = (t_dlist *) malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->content = content;
	new->next = NULL;
	return (new);
}

t_dlist	*stack_init(char *numbers[])
{
	t_dlist	*head;
	t_dlist	*node;
	int		counter;

	counter = 1;
	head = new_node(ft_atoi(numbers[counter++]), NULL);
	node = head;
	while (numbers[counter])
	{
		node->next = new_node(ft_atoi(numbers[counter++]), node);
		node = node->next;
	}
	return (head);
}
