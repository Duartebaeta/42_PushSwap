/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:59:47 by duartebaeta       #+#    #+#             */
/*   Updated: 2022/02/16 19:47:26 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

static d_list	*new_node(int content, d_list *prev)
{
	d_list	*new;
	
	new = (d_list*) malloc(sizeof(d_list));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->content = content;
	new->next = NULL;
	return (new);
}

d_list	*stack_init(char *numbers[])
{
	d_list	*head;
	d_list	*node;
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