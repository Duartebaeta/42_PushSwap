/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:29:03 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/02/24 16:56:07 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

char	*strrev(char *string)
{
	char	*newstring;
	int		counter;
	int		str_count;

	newstring = (char *) malloc(sizeof(char) * ft_strlen(string) + 1);
	if (!newstring)
		return (NULL);
	str_count = ft_strlen(string) - 1;
	counter = 0;
	while (str_count >= 0)
	{
		newstring[counter] = string[str_count];
		counter++;
		str_count--;
	}
	newstring[counter] = '\0';
	return (newstring);
}
