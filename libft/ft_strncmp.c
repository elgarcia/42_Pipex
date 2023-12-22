/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 01:16:28 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/03 01:22:12 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *a = argv[1];
		char *b = argv[2];
		printf("Test ft_strncmp: %d\n", ft_strncmp(a, b, atoi(argv[3])));
		printf("Test strncmp: %d\n", strncmp(a, b, atoi(argv[3])));
		
	}
	return 0;
}*/