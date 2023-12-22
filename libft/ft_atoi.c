/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:44:32 by eliagarc          #+#    #+#             */
/*   Updated: 2023/11/07 16:58:07 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	char		*s;
	long		aux;
	int			signmin;

	aux = 0;
	signmin = 0;
	s = (char *)str;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			signmin++;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		aux = (aux * 10) + *s - 48;
		s++;
	}
	if (signmin % 2 != 0)
		aux *= -1;
	return (aux);
}

/* #include <stdlib.h>
#include <stdio.h>
int	main()
{
	printf("Test ft_atoi: %d\n", ft_atoi(((void *)0)));
	//printf("Test atoi: %d\n", atoi(((void *)0)));
	return (0);
} */