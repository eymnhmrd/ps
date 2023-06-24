# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 17:55:17 by ahamrad           #+#    #+#              #
#    Updated: 2023/06/23 01:33:10 by ahamrad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
HEADER = push_swap.h

SRCS = push_swap.c utils.c ft_split.c op_push.c op_reverse_rotate.c op_rotate.c op_swap.c \
		stack_utils1.c stack_utils2.c sort_three.c big_sort.c parsing.c parsing2.c parsing3.c \
		
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC)  $(CFLAGS) $(OBJ) $(SRCS) -o $(NAME)

%.o:%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re