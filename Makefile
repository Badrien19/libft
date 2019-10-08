# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badrien <badrien@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 10:38:07 by badrien           #+#    #+#              #
#    Updated: 2019/10/08 11:39:25 by badrien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strncmp.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

LIB = ar rc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -fPIC

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: fclean all

so:			$(OBJ) libft.h
			$(CC) -shared -fPIC -Wl,-soname,libft.so -o libft.so $(OBJ)