# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:23 by jocroon           #+#    #+#              #
#    Updated: 2024/10/30 13:44:09 by jocroon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = *.c #ECRIRE TTE LES FONCTIONS A LA MAIN POUR LE RENDU
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