/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:13:50 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/27 17:50:33 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n))
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("Test 1: Hola mundo 42\n");
		char a[20] = "Hola mundo 42";
		char b[20] = "Hola mundo 42";
		ft_bzero(a, argv[1][0] - 48);
		printf("ft_bzero : %s\n", a);
		bzero(b, argv[1][0] - 48);
		printf("bzero : %s\n", b);
	}
	return (0);
}*/
