/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:50:02 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/08 21:54:10 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	int		size_s1;
	int		size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	aux = malloc(size_s1 + size_s2 + 1);
	if (!aux)
		return (NULL);
	else
	{
		ft_strcpy(aux, s1);
		ft_strlcat(aux, s2, size_s1 + size_s2 + 1);
	}
	return (aux);
}

/* #include <stdio.h>
int     main()
{
        const char a[] = "Hola \n";
        const char b[] = " mundo 42";
        char *c;

        c = ft_strjoin(NULL, b); // OJU no pasa NULL!
        printf("Test ft_strjoin: %s\n", c);
        printf("Size of string: %zu\n", ft_strlen(c));
} */