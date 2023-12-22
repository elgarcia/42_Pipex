/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:14:03 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/25 16:26:59 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("Test 1:\n");
		printf("ft_toupper: %c\n", ft_toupper(argv[1][0]));
		printf("toupper: %c\n", toupper(argv[1][0]));
	}
	return (0);
}*/
