/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:51:06 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/08 17:59:49 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <string.h>
//#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (dst_len);
	while (i < (dstsize - 1) && i < dst_len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst_len);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char a[20] = "Hola mundo 42";
		char c[20] = "Hola mundo 42";
		char b[20] = "Good bye";
		char d[20] = "Good bye";
		printf("Tests:\n");
		printf("String a: %s\nString b: %s\n", a, b);
		printf("ft_strlcpy: %s, size = %d\n", 
		a, (int)ft_strlcpy(a, b, atoi(argv[1])));
		printf("strlcpy: %s, size = %d\n", c, (int)strlcpy(c, d, atoi(argv[1])));
	}
	return (0);
}*/