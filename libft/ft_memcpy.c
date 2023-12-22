/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:35:13 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/27 18:16:06 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		printf("Test 1:\n");
// 		char a[50] = "Hola mundo 42";
// 		char c[50] = "Hola mundo 42";
// 		char b[50] = "adios";
// 		printf("String 1: %s\n", a);
// 		printf("String 2: %s\n", b);
// 		printf("ft_memcpy : %s\n", 
//		(char *)ft_memcpy((void *)0, (void *)0, argv[1][0] - '0'));
// 		// printf("memcpy: %s\n", 
//		(char *)memcpy((void *)0 , (void *)0, argv[1][0] - '0'));
// 	}
// 	return (0);
// }
