/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:47:14 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/23 02:56:55 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("Test 1 (ft_strlen): Return del string %s = %d\n", 
				argv[1], ft_strlen(argv[1]));
		printf("Test 1 (strlen): Return del string %s = %lu\n",
				argv[1], strlen(argv[1]));
	}
	return (0);
}*/
