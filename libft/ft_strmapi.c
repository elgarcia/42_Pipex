/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:10:16 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/17 17:10:17 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*aux;

	i = 0;
	if (!s || !f)
		return (NULL);
	aux = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	ft_memcpy(aux, s, ft_strlen(s) + 1);
	while (s[i])
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	return (aux);
}
