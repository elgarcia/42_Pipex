# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elias <elias@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:50:42 by eliagarc          #+#    #+#              #
#    Updated: 2023/12/14 02:21:31 by elias            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SOURCE =  Src/ft_pipex.c Src/ft_pipex_utils.c Src/ft_treats.c Src/ft_inits.c
INCLUDE = Inc/ft_pipex.h

SILENCE = --no-print-directory

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SOURCE:.c=.o)

%.o: %.c Makefile $(INCLUDE)
	@echo "Compiling $<..."
	@${CC} -c ${CFLAGS} -I $(INCLUDE) $< -o $@

all: sub_make $(NAME)

$(NAME): ${OBJS} $(INCLUDE) Makefile
	@echo "Creating executable..."
	@$(CC) $(CFLAGS) $(SOURCE) libft/libft.a -o $(NAME)
	@echo "$(NAME) created!"
	
sub_make:
	@echo "Compiling libft..."
	@make -C libft $(SILENCE)

clean:
	@echo "Cleaning object files..."
	@make clean -C libft $(SILENCE)
	@rm -f $(OBJS)
	@echo "Object files removed!"

fclean:	clean
	@echo "Cleaning trash..."
	@make fclean -C libft $(SILENCE)
	@rm -f $(NAME) checker
	@rm -f $(NAME).a
	@echo "Trash removed!"

re: 	fclean all

.PHONY: all clean fclean re sub_make