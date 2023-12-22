/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:38:55 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/23 02:46:07 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		if (ft_isprint(argv[1][0]) == 1)
			printf("El caracter %c es printable\n", argv[1][0]);
		else
			printf("El caracter %c no es printable\n", argv[1][0]);
	}
	return (0);
}*/
