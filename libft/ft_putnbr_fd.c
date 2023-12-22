/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:50:28 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/17 17:50:29 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec_nbr(int nbr, int fd)
{
	char	aux;

	if (nbr / 10 != 0)
	{
		aux = (nbr % 10) + 48;
		rec_nbr(nbr / 10, fd);
	}
	else
		aux = nbr + 48;
	if (fd != 0)
		write(fd, &aux, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648 && fd != 0)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0 && fd != 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
	}
	if (fd != 0)
		rec_nbr(n, fd);
}

/* int	main()
{
	ft_putnbr_fd((char) 0, 1);
	return (0);
} */