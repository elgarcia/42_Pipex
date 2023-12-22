/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:02:07 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 12:27:57 by eliagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_pipex.h"
#include "../libft/libft.h"

void	check_word(const char **s1)
{
	if (**s1 == 39)
	{
		while (*(++(*s1)) != 39)
		{
		}
	}
	(*s1)++;
}

void	ft_free(char **arg, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}

int	check_command(char *command, char ***exec_args)
{
	if (command[0] == '/')
	{
		if (access(command, F_OK | X_OK) == 0)
		{
			(*exec_args)[0] = ft_strdup(command);
			if (!(*exec_args)[0])
				return (ft_free(*exec_args, 1), -1);
			return (0);
		}
		else
			return (ft_printf("%s: command not found\n", command), -1);
	}
	else if (ft_strnstr(command, ".sh", ft_strlen(command)))
	{
		if (access(command, F_OK | X_OK) == 0)
		{
			(*exec_args)[0] = ft_strdup(command);
			if (!(*exec_args)[0])
				return (ft_free(*exec_args, 1), -1);
			return (0);
		}
		else
			return (ft_printf("%s: command not found\n", command), -1);
	}
	return (1);
}

static int	init_cmd(int *aux, char ***cmd_split, char **argv, int arg_c)
{
	*cmd_split = ft_split(argv[arg_c], ' ');
	if (!*cmd_split)
		return (-1);
	*aux = ft_word_count(argv[arg_c], ' ') + 1;
	return (0);
}

int	prepare_command(char **argv, int arg_c, char ***exec_args, char **envp)
{
	int		aux;
	char	**cmd_split;

	if (init_cmd(&aux, &cmd_split, argv, arg_c) == -1)
		return (-1);
	*exec_args = (char **)ft_calloc(aux, sizeof(char *));
	if (!*exec_args)
		return (ft_free(cmd_split, ft_word_count(argv[arg_c], ' ')), -1);
	aux = check_command(cmd_split[0], exec_args);
	if (aux == 1)
	{
		if (assign_path(exec_args, cmd_split[0], envp) == -1)
			return (ft_free(cmd_split, ft_word_count(argv[arg_c], ' ')), \
				free(*exec_args), -1);
	}
	if (aux == -1
		|| init_execargs(exec_args, argv[arg_c]) == -1)
		return (ft_free(cmd_split, ft_word_count(argv[arg_c], ' ')), -1);
	return (ft_free(cmd_split, ft_word_count(argv[arg_c], ' ')), 0);
}
