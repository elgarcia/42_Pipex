/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:47:08 by eliagarc          #+#    #+#             */
/*   Updated: 2023/10/24 11:08:58 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	format_arg(const char arg, va_list vl, int *check_aux)
{
	int	check;

	check = 0;
	check = check_format(arg, vl);
	if (check == -1)
		return (-1);
	*check_aux += check;
	return (0);
}

int	ft_printf(char const *arg, ...)
{
	va_list		var_list;
	int			aux;

	aux = 0;
	va_start(var_list, arg);
	while (*arg)
	{
		if (*arg == '%')
		{
			if (format_arg(*(++arg), var_list, &aux) == -1)
				return (-1);
		}
		else
		{
			if (write(1, arg, 1) == -1)
				return (-1);
			aux++;
		}
		arg++;
	}
	va_end(var_list);
	return (aux);
}

/* #include <limits.h>
int main()
{
	printf("\nft_printf: %d\n",
	ft_printf("%%%c", 'x'));
	printf("\nprintf: %d\n", 
	ft_printf("%%%c", 'x'));
	return (0);
} */