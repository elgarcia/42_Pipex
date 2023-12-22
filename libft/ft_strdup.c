/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:59:19 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/13 11:59:20 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <string.h>

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

char	*ft_strdup(const char *s1)
{
	char	*aux;
	int		s_size;

	s_size = ft_strlen(s1);
	aux = (char *)malloc(s_size + 1);
	if (!aux)
		return (NULL);
	else
		ft_strcpy(aux, s1);
	return (aux);
}

/*int main() {
   char *str = "lorem ipsum dolor sit amet";
   char *result;
   char *result2;
   result = ft_strdup(str);
   result2 = strdup(str);
   printf("The string : %s\n", result);
   printf("The string : %s\n", result2);
   return 0;
}*/