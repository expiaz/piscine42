# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/25 20:54:06 by rgidon            #+#    #+#              #
#    Updated: 2018/07/25 22:31:02 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = ./main.c \
	   ./parse.c \
	   ./logic.c \
	   ./print.c \
	   ./body.c \
	   ./header.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

./%.o: ./%.c
	gcc $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
