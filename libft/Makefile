# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 12:27:20 by aoprea            #+#    #+#              #
#    Updated: 2024/03/02 16:01:43 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = sources
OBJS = ${SRCS:.c=.o}

.c.o:
	cc -Wall -Wextra -Werror -c $< -o $@ -I includes

libft.a: ${OBJS}
	ar rc libft.a ${OBJS}
	ar -s libft.a

all: libft.a

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f libft.a

re: fclean all