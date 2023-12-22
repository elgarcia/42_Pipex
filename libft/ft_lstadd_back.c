/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:20:48 by eliagarc          #+#    #+#             */
/*   Updated: 2023/09/17 22:20:49 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new)
	{
		if (!*lst)
			*lst = new;
		else
			ft_lstlast(*lst)->next = new;
	}
}

/* int	main()
{
	t_list		*begin;
	t_list		*elem;
    t_list      *elem2;
    t_list      *elem3;
    t_list      *elem4;
    char        *str = strdup("lorem");
    char        *str2 = strdup("ipsum");
    char        *str3 = strdup("dolor");
    char        *str4 = strdup("sit");

	elem = ft_lstnew(str);
    elem2 = ft_lstnew(str2);
    elem3 = ft_lstnew(str3);
    elem4 = ft_lstnew(str4);
	begin = NULL;
    ft_lstadd_back(&begin, elem);
    ft_lstadd_back(&begin, elem2);
    ft_lstadd_back(&begin, elem3);
    ft_lstadd_back(&begin, elem4);
    while (begin)
    {
        printf("%s", (char *)begin->content);
        begin = begin->next;
    }
	return (0);
} */