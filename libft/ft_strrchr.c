/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:49 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/02 21:55:40 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	*aux;

	s_len = ft_strlen(s);
	aux = (char *)(s + s_len);
	s_len++;
	while (s_len--)
	{
		if (*aux == (char)c)
			return (aux);
		aux--;
	}
	return (NULL);
}

/*int main() {
  char *str = "Hello, world!";
  char c = 'l';
  char *p = ft_strrchr(str, c);
  if (p != NULL) {
    printf("The last occurrence of '%c' in 
	'%s' is at index %ld.\n", c, str, p - str);
  } else {
    printf("The character '%c' is not found in '%s'.\n", c, str);
  }
  return 0;
}*/
