/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:22:39 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 02:55:46 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_pipex.h"
#include "../libft/libft.h"

void	double_free(char **aux, char **actual_path)
{
	free(*actual_path);
	free(*aux);
}

static void	acces_check(char **argv, int *pipes_fd)
{
	if (access(argv[1], F_OK | R_OK) == -1)
	{
		close(pipes_fd[0]);
		close(pipes_fd[1]);
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
}

static void	open_file(int *fd, int *pipe_fd, char **argv, int file)
{
	if (file == 4)
	{
		*fd = open(argv[file], O_RDWR | O_CREAT | O_TRUNC | O_NONBLOCK, 0666);
		if (*fd == -1)
		{
			perror("Failed to open output file");
			close(pipe_fd[0]);
			close(pipe_fd[1]);
			exit(EXIT_FAILURE);
		}
	}
	else if (file == 1)
	{
		*fd = open(argv[file], O_RDONLY);
		if (*fd == -1)
		{
			perror("Failed to open output file");
			close(pipe_fd[0]);
			close(pipe_fd[1]);
			exit(EXIT_FAILURE);
		}
	}
}

void	treat_child(int *pipes, char **argv, char ***exec_args, char **envp)
{
	int	input_fd;

	acces_check(argv, pipes);
	open_file(&input_fd, pipes, argv, 1);
	close(pipes[0]);
	if (prepare_command(argv, 2, exec_args, envp) == -1)
	{
		close(pipes[1]);
		exit(127);
	}
	if (dup2(input_fd, STDIN_FILENO) == -1)
	{
		perror("New file dup2 error");
		close(pipes[1]);
		close(input_fd);
		exit(EXIT_FAILURE);
	}
	if (dup2(pipes[1], STDOUT_FILENO) == -1)
	{
		close(pipes[1]);
		perror("Child dup2 error");
		exit(EXIT_FAILURE);
	}
	close(pipes[1]);
	close(input_fd);
}

void	treat_parent(int *pipe_fd, char **argv, char ***exec_args, char **envp)
{
	int	output_fd;

	close(pipe_fd[1]);
	open_file(&output_fd, pipe_fd, argv, 4);
	if (prepare_command(argv, 3, exec_args, envp) == -1)
		exit(127);
	if (dup2(output_fd, STDOUT_FILENO) == -1)
	{
		perror("New file dup2 error");
		close(pipe_fd[0]);
		close(output_fd);
		exit(EXIT_FAILURE);
	}
	if (dup2(pipe_fd[0], STDIN_FILENO) == -1)
	{
		perror("Parent dup2 error");
		close(pipe_fd[0]);
		exit(EXIT_FAILURE);
	}
	close(pipe_fd[0]);
	close(output_fd);
}
