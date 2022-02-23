/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:59:47 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/23 14:56:38 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

static td_list	*new_node(int content, td_list *prev)
{
	td_list	*new;
	
	new = (td_list*) malloc(sizeof(td_list));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->content = content;
	new->next = NULL;
	return (new);
}

td_list	*stack_init(char *numbers[])
{
	td_list	*head;
	td_list	*node;
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