# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asousa-f <asousa-f@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 15:35:32 by asousa-f          #+#    #+#              #
#    Updated: 2023/09/01 11:58:20 by asousa-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

SRCS = src/ft_printf.c src/ft_printf_utils_chars.c src/ft_printf_utils_nbrs.c \
		src/ft_itoa.c src/ft_itoa_u.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all