/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:14:03 by eliagarc          #+#    #+#             */
/*   Updated: 2023/08/25 16:31:30 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("Test 1:\n");
		printf("ft_tolower: %c\n", ft_tolower(argv[1][0]));
		printf("tolower: %c\n", tolower(argv[1][0]));
	}
	return (0);
}*/
