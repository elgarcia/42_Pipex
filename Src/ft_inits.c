/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:48:57 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 02:47:27 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_pipex.h"
#include "../libft/libft.h"

static int	reassign_path(char ***aux2, char *envp)
{
	char	*aux;

	aux = ft_strdup((*aux2)[1]);
	ft_free(*aux2, ft_word_count(envp, '='));
	if (!aux)
		return (-1);
	*aux2 = ft_split(aux, ':');
	if (!*aux2)
		return (-1);
	free(aux);
	return (0);
}

static int	search_path(char **env_1, char	**actual_path, \
	char *command, char ***exec_args)
{
	char	*aux;
	int		i;

	i = -1;
	while (env_1[++i])
	{
		aux = ft_strjoin(env_1[i], "/");
		if (!aux)
			return (-1);
		*actual_path = ft_strjoin(aux, command);
		if (!*actual_path)
			return (free(aux), -1);
		if (access(*actual_path, F_OK | X_OK) == 0)
		{
			(*exec_args)[0] = ft_strdup(*actual_path);
			if (!(*exec_args)[0])
				return (ft_free(*exec_args, 1), free(*actual_path), -1);
			return (free(*actual_path), free(aux), 0);
		}
		else
			double_free(&aux, actual_path);
	}
	return (ft_printf("%s: command not found\n", command), -2);
}

int	assign_path(char ***exec_args, char *command, char **envp)
{
	char	*aux_path;
	char	**aux2;
	int		flag;
	int		i;

	i = -1;
	while (envp[++i])
	{
		aux2 = ft_split(envp[i], '=');
		if (!aux2)
			return (-1);
		if (!ft_strncmp(aux2[0], "PATH", ft_strlen(envp[i])))
		{
			if (reassign_path(&aux2, envp[i]) == -1)
				return (-1);
			flag = search_path(aux2, &aux_path, command, exec_args);
			if (flag == 0 || flag == -1)
				return (ft_free(aux2, ft_word_count(envp[i], ':')), flag);
			break ;
		}
		else
			ft_free(aux2, ft_word_count(envp[i], '='));
	}
	return (ft_free(aux2, ft_word_count(envp[i], ':')), -1);
}

void	init_pipex(int *pipe_fd, pid_t *pid)
{
	if (pipe(pipe_fd) == -1)
	{
		perror("Pipe creation failed!");
		exit(EXIT_FAILURE);
	}
	*pid = fork();
	if (*pid < 0)
	{
		perror("Fork failed!");
		exit(EXIT_FAILURE);
	}
}

int	init_execargs(char ***ex_argc, char *command)
{
	char	**aux;
	int		i;

	i = 0;
	aux = ft_split(command, ' ');
	if (!aux)
		return (-1);
	while (++i < ft_word_count(command, ' '))
	{
		(*ex_argc)[i] = ft_strdup(aux[i]);
		if (!(*ex_argc)[i])
			return (ft_free(*ex_argc, i), \
			ft_free(aux, ft_word_count(command, ' ')), -1);
	}
	return (ft_free(aux, ft_word_count(command, ' ')), 0);
}
