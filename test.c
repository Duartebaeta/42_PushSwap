/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:53:15 by dhomem-d          #+#    #+#             */
/*   Updated: 2022/01/27 17:11:34 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
int main(int argc, char const *argv[])
{
	printf("%i\n", argc);
	for(int counter = 1; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);	
	}
	return 0;
}