# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/26 13:57:50 by tblaase           #+#    #+#              #
#    Updated: 2021/09/15 21:22:28 by tblaase          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES =	ft_atoi.c\
			ft_atol.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_free.c\
			ft_intlen.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_put_unsigned_nbr.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strndup.c\
			ft_strnjoin.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\

BONUS = 	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\

OBJECTS = $(CFILES:.c=.o)

BONUSOBJECTS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

MAIN = main

all: $(NAME) bonus

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUSOBJECTS)
	ar -rcs $(NAME) $(BONUSOBJECTS)
