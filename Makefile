# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:23 by jocroon           #+#    #+#              #
#    Updated: 2024/10/15 14:35:01 by jocroon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = *.c
INCLUDES = .
OBJECTS = $(SOURCES:%.c=%.o)
NAME = libft.a

CC = gcc
RM = rm -f
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES)
	$(AR) $(NAME) $(OBJECTS)

%.o: %c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re