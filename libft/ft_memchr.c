/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:29:27 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/11 20:29:29 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	if (!n)
		return (NULL);
	aux = (unsigned char *)str;
	while (i < n)
	{
		if (*aux == (unsigned char)c)
			return (aux);
		aux++;
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main()
{
	printf("%s\n", (char *)ft_memchr(((void *)0), '\0', 0x20));
	printf("%s\n", (char *)memchr(((void *)0), '\0', 0x20));
	return (0);
} */