/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:26:46 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/23 02:38:24 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		if (ft_isascii(argv[1][0]) == 1)
			printf("El caracter %c es ascii\n", argv[1][0]);
		else
			printf("El caracter %c no es ascii\n", argv[1][0]);
	}
	return (0);
}*/
