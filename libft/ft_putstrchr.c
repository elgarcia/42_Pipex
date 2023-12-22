/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:45:20 by eliagarc          #+#    #+#             */
/*   Updated: 2023/10/24 11:09:34 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (write(fd, &s[i], 1) == -1)
				return (-1);
			i++;
		}
	}
	else
		return (write(fd, "(null)", 6));
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
