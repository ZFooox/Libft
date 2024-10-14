# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:23 by jocroon           #+#    #+#              #
#    Updated: 2024/10/14 15:13:23 by jocroon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
INCLUDES = libft.h
OBJECTS = $(SOURCES:%.c=%.o)
NAME = libft.a

CC = gcc
RM = rm -f
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re