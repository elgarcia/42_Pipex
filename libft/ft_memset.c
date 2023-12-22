/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:35:48 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/27 17:48:37 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		((char *)b)[i] = c;
		i++;
	}
	return ((char *)b);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char b[20] = "This is a 42 test";
		printf("Test 1\n");
		printf("Este es el resultado de ft_memset: %s\n", 
			(char *)ft_memset(b, argv[1][0], argv[2][0] - 48));
		printf("Este es el resultado de memeset: %s\n",
			(char *)memset(b, argv[1][0], argv[2][0] - 48));
	}
	return (0);
}*/
