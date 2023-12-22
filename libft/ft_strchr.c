/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:29:17 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/26 16:34:59 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s;
	while (*aux)
	{
		if (*aux == (char) c)
			return (aux);
		aux++;
	}
	if ((char) c == '\0')
		return (aux);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main()
{
	printf("Test 1: Hola Mundo 42\n");
	char a[20] = "Hola Mundo 42";
	char *b;
	b = ft_strchr(((void *)0), '\0');
	printf("ft_strchr: %s\n", b);
	printf("strchr: %s\n", strchr(((void *)0), '\0'));
	return (0);
} */
