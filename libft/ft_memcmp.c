/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:09:14 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/11 21:09:15 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)str1)[i]
			!= ((const unsigned char *)str2)[i])
			return (((const unsigned char *)str1)[i]
				- ((const unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		const char *a = argv[1];
		const char *b = argv[2];
		printf("Test ft_memcmp: %d\n", 
		ft_memcmp((const char*)a, (const char*)b, atoi(argv[3])));
		printf("Test memcmp: %d\n", 
		memcmp((const char*)a, (const char*)b, atoi(argv[3])));
		
	}
	return 0;
}*/