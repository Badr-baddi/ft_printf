# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 23:37:49 by bael-bad          #+#    #+#              #
#    Updated: 2024/11/25 14:10:21 by bael-bad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned_nb.c \
		ft_hexadcm.c ft_put_adrss.c
GCC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libftprintf.a
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
