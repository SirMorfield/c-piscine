# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ecaceres <marvin@42.fr>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/12 12:36:23 by ecaceres      #+#    #+#                  #
#    Updated: 2020/09/11 00:24:02 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	= src/ft_putchar.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c src/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
