# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salquier <salquier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 15:57:33 by salquier          #+#    #+#              #
#    Updated: 2018/07/22 22:56:25 by salquier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS = ./main.c \
	   ./ft_parse.c \
	   ./ft_print.c \
	   ./ft_input.c \
	   ./colle_list.c \
	   ./colle_detect.c \
	   ./string_manip.c \
	   ./string_util.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

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
