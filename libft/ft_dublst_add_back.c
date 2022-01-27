/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dublst_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:34:57 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/27 16:45:07 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dublst_add_back(d_list **lst, d_list *new)
{
	d_list *cursur;

	cursur = *lst;
	if (cursur != NULL)
	{
		while (cursur->next != NULL)
			cursur = cursur->next;
		cursur->next = new;
		new->previous = cursur;
	}
	else
		new = *lst;
}
