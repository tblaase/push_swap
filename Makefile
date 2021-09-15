# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 15:37:12 by tblaase           #+#    #+#              #
#    Updated: 2021/09/15 21:56:15 by tblaase          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFILES =	actions/pa.c\
			actions/pb.c\
			actions/ra.c\
			actions/rb.c\
			actions/rr.c\
			actions/rra.c\
			actions/rrb.c\
			actions/rrr.c\
			actions/sa.c\
			actions/sb.c\
			actions/ss.c\
			help_functions/ft_big_sort_lower.c\
			help_functions/ft_big_sort_upper.c\
			help_functions/ft_eigths.c\
			help_functions/ft_find.c\
			help_functions/ft_free_all.c\
			help_functions/ft_if_sorted.c\
			help_functions/ft_median.c\
			help_functions/ft_quarters.c\
			input_functions/ft_input_error.c\
			input_functions/ft_input.c\
			list_functions/ft_del.c\
			list_functions/ft_lst_functions.c\
			list_functions/ft_push_smallest.c\
			list_functions/ft_set_flag.c\
			sort_functions/ft_big_sort.c\
			sort_functions/ft_large_pa.c\
			sort_functions/ft_small_pa.c\
			sort_functions/ft_sort_five.c\
			sort_functions/ft_sort_four.c\
			sort_functions/ft_sort_three.c\
			sort_functions/ft_sort.c\
			push_swap.c\

OBJECTS = $(CFILES:.c=.o)

LIB_PATH = libft/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: subsystem $(NAME)

subsystem:
	make -C $(LIB_PATH) all

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIB_PATH)libft.a -o $(NAME)

clean:
	make -C $(LIB_PATH) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIB_PATH) fclean
	rm -f $(NAME)

re: fclean all

call: all clean
	make -C $(LIB_PATH) fclean
