/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:15:17 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/02 16:30:05 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*aux;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	aux = (char *)malloc(len + 1);
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, s + start, len + 1);
	return (aux);
}

/*int	main()
{
	char a[] = "Hola mundo 42";
	char *b = ft_substr(a, 4, 2);

	printf("ft_substr : %s\n", b);
	printf("size substring: %zu\n", ft_strlen(b));
	free(b);
	return (0);
}*/