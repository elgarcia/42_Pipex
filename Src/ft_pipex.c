/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:20 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 12:30:37 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_pipex.h"
#include "../libft/libft.h"

int	ft_word_count(const char *s1, char delimiter)
{
	int	counter;
	int	aux;

	aux = 0;
	counter = 0;
	if (!s1)
		return (0);
	while (*s1)
	{
		while (*s1 == delimiter && *s1)
		{
			s1++;
			aux = 1;
		}
		while (*s1 != delimiter && *s1)
		{
			check_word(&s1);
			aux = 2;
		}
		if (aux == 2)
			counter++;
	}
	return (counter);
}

int	get_index(char *command, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_strncmp(command, argv[i], ft_strlen(command)) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int	main(int argc, char **argv, char **envp)
{
	int		pipe_fd[2];
	pid_t	first_child;
	char	**exec_args;

	if (argc == 5)
	{
		init_pipex(pipe_fd, &first_child);
		if (first_child == 0)
		{
			treat_child(pipe_fd, argv, &exec_args, envp);
			execve(exec_args[0], exec_args, envp);
			perror("Child execve failed!");
		}
		else
		{
			treat_parent(pipe_fd, argv, &exec_args, envp);
			execve(exec_args[0], exec_args, envp);
			perror("Parent execve failed!");
		}
	}
	else
		return (ft_printf("Not enough/Too much arguments\n"), 0);
	return (0);
}
