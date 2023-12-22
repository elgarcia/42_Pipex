/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:03:05 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/13 16:03:06 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_len;
	char	*aux;

	i = 0;
	s1_len = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1_len > 0 && i < s1_len && ft_strchr(set, s1[s1_len]))
		s1_len--;
	aux = ft_substr(s1, i, (s1_len - i) + 1);
	if (!aux)
		return (NULL);
	return (aux);
}

/*int	main()
{
	char a[] = "     ";
	char b[] = " ";
	char *c = ft_strtrim(a, b);

	printf("Test ft_strim : %s\n", c);
	printf("size of string: %zu", ft_strlen(c));
}*/