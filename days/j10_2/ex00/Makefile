# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 15:14:24 by rgidon            #+#    #+#              #
#    Updated: 2018/07/24 10:46:50 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		gcc

FLAGS =		-Wall -Werror -Wextra

SRCS =		./srcs/ft_putchar.c \
			./srcs/ft_putstr.c \
			./srcs/ft_strcmp.c \
			./srcs/ft_strlen.c \
			./srcs/ft_swap.c

OBJS =		./ft_putchar.o \
			./ft_putstr.o \
			./ft_strcmp.o \
			./ft_strlen.o \
			./ft_swap.o

INCLUDES = 	./includes

all: compile link

compile:
	$(CC) $(FLAGS) -c -I $(INCLUDES) $(SRCS)

link:
	ar -cq $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
