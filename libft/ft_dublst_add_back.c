/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dublst_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duartebaeta <duartebaeta@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:34:57 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/28 11:52:53 by duartebaeta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dublst_add_back(d_list **lst, d_list *new)
{
	d_list *cursur;

	cursur = *lst;
	if (*lst != NULL)
	{
		while (cursur->next != NULL)
			cursur = cursur->next;
		cursur->next = new;
		new->previous = cursur;
	}
	else
		*lst = new;
}
