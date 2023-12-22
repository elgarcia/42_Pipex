/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_nf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:28:22 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/02 07:01:47 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <stdlib.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total_len;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	total_len = ft_strlen(src);
	if (dstsize != 0 && (dstsize > dst_len))
	{
		while (i < (dstsize - dst_len - 1) && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = 0;
		return (total_len + dst_len);
	}
	while (i < dstsize)
		i++;
	total_len += i;
	return (total_len);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char a[20] = "Hola mun";
		char b[20] = "do 42";
		char c[20] = "Hola mun";
		unsigned long aux = 0;
		printf("Tests:\n");
		aux = (unsigned long)ft_strlcat(a, b, atoi(argv[1]));
		printf("ft_strlcat: %s, size = %lu\n", a, aux);
		aux = strlcat(c, b, atoi(argv[1]));
		printf("strlcat: %s, size = %lu\n", c, aux);
	}
	return (0);
}*/
