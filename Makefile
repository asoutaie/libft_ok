# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 19:13:46 by asoutaie          #+#    #+#              #
#    Updated: 2024/01/26 19:53:20 by asoutaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

CC			= gcc
CFLAGS			= -Wextra -Werror -Wall
AR			= ar rc
RM			= rm -rf

SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_bzero.c ft_atoi.c ft_itoa.c \
		ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c \
		ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_strmapi.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

OBJS = $(SRC:.c=.o)

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}


all:		$(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)

re:		clean	fclean all
