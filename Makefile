# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 11:34:13 by iwillmot          #+#    #+#              #
#    Updated: 2022/05/06 11:34:16 by iwillmot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# dir
SRCDIR = ./src
INCDIR = ./include
OBJDIR = ./obj

# src
SRC = push_swap.c \
	ft_helpers.c \
	error_check.c \

OBJ	= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# compiler
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g

# build instructions
all: obj $(NAME)
	./$(NAME) "45 6 192 2 3 -21 1872 -2 -391"
	./$(NAME) 45 6 192 2 3 -21 1872 -2 -391

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lm -o $(NAME)

clean:
	rm $(NAME)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
