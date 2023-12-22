/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:34:59 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/12 11:35:01 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
/* #include <string.h>
#include <stdlib.h>
#include <stdio.h> */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bneed;
	char	*bhay;

	i = 0;
	bneed = (char *)needle;
	bhay = (char *)haystack;
	if (!bneed[i])
		return (bhay);
	while (bhay[i] && i < len)
	{
		j = 0;
		while (bhay[i + j] && bneed[j]
			&& bhay[i + j] == bneed[j] && (i + j) < len)
			j++;
		if (!bneed[j])
			return (bhay + i);
		i++;
	}
	return (NULL);
}

/* int main()
{
	char *s1 = "A";
    size_t max = strlen(s1) + 1;
    char *i1 = strnstr(s1, s1, max);
    char *i2 = ft_strnstr(s1, s1, max);
    printf("Test ft_strnstr: %s\n", i1);
    printf("Test strnstr: %s\n", i2);
	if (i1 == i2)
        printf("okay");
    else
		printf("bad");
    return (0);
} */