/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:14:31 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/23 02:25:22 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		if (ft_isalnum(argv[1][0]) == 1)
			printf("El caracter %c es alfanumeric\n", argv[1][0]);
		else
			printf("El caracter %c no es alfanumeric\n", argv[1][0]);
	}
	return (0);
}*/
