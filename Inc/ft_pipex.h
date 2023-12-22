/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:27 by eliagarc          #+#    #+#             */
/*   Updated: 2023/12/14 02:37:20 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEX_H
# define FT_PIPEX_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <sys/wait.h>
# include <string.h>

/* AUXILIAR FUNCTIONS */
int		prepare_command(char **argv, int arg_c, \
	char ***exec_args, char **envp);
int		ft_word_count(const char *s1, char delimiter);
void	ft_free(char **arg, int size);
int		get_index(char *command, char **argv);
void	check_word(const char **s1);

/* INIT COMMANDS */
void	init_pipex(int *pipe_fd, pid_t *pid);
int		init_execargs(char ***ex_args, char *command);
int		assign_path(char ***exec_args, char *command, char **envp);

/* TREATMENT COMMANDS */
void	treat_parent(int *pipe_fd, char **argv, char ***exec_args, char **envp);
void	treat_child(int *pipes, char **argv, char ***exec_args, char **envp);

/* ERROR HANDLING */
int		check_command(char *command, char ***exec_args);
void	double_free(char **aux, char **actual_path);

#endif