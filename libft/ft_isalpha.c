/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:48:43 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/23 02:10:00 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		if (ft_isalpha(argv[1][0]) == 1)
			printf("El caracter %c es alpha\n", argv[1][0]);
		else
			printf("El caracter %c no es alpha\n", argv[1][0]);
	}
	return (0);
}*/
