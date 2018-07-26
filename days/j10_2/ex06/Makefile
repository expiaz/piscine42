# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgidon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 19:04:30 by rgidon            #+#    #+#              #
#    Updated: 2018/07/26 11:32:30 by rgidon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	do-op

SRCS =	./ft_strings.c \
		./ft_io.c \
		./operations.c \
		./doop.c

OBJS =	$(SRCS:.c=.o)

CC =	gcc

FLAGS =	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

./%.o: ./%.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
