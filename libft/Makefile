# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliagarc <eliagarc@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 19:16:50 by eliagarc          #+#    #+#              #
#    Updated: 2023/10/28 19:16:22 by eliagarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = libft.h
SRCS = ft_isalpha.c ft_memcmp.c  ft_strdup.c  ft_strncmp.c ft_tolower.c \
ft_atoi.c    ft_isascii.c ft_memcpy.c  ft_strjoin.c ft_strnstr.c ft_toupper.c \
ft_bzero.c   ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c  \
ft_calloc.c  ft_isprint.c ft_memset.c  ft_strlcpy.c ft_strtrim.c \
ft_isalnum.c ft_memchr.c  ft_strchr.c  ft_strlen.c  ft_substr.c \
ft_split.c	 ft_itoa.c	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_checks.c ft_printf.c \
ft_puthexa.c ft_putnumbers.c ft_putpointer.c ft_putstrchr.c get_next_line.c \
get_next_line_utils.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = cc
CFLAGS = -Wall -Werror -Wextra 

OBJS = ${SRCS:.c=.o}

OBJS_ALL = $(OBJS) $(OBJS_BONUS)

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

%.o: %.c Makefile $(INCLUDES)
	@echo "Work in progress.."
	@${CC} ${CFLAGS} -I ./ -c $(SRCS)

all:	${NAME}

$(NAME): ${OBJS} $(INCLUDES) Makefile
	@echo "Creating libft library..."
	@ar rc ${NAME} ${OBJS}
	@echo "Library libft created!"

bonus: $(OBJS_ALL)
	@ar rcs ${NAME} $(OBJS_BONUS)

clean:
	@echo "Removing libft object files..."
	@rm -f $(OBJS_ALL)
 
fclean: clean
	@rm -f $(NAME)
	@echo "Libft stuff removed!"

re:	fclean all
	
.PHONY: all clean fclean re