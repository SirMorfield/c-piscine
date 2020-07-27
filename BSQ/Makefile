# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/24 14:54:00 by jkoers        #+#    #+#                  #
#    Updated: 2020/07/27 15:29:47 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

bsq: install install/main.o install/grid.o install/ft_atoi.o
	gcc -Wall -Wextra -Werror install/*.o -o bsq
install/main.o: install main.c grid.h
	gcc -Wall -Wextra -Werror -c main.c -o install/main.o
install/grid.o: install grid.c grid.h
	gcc -Wall -Wextra -Werror -c grid.c -o install/grid.o
install/ft_atoi.o: install ft_atoi.c ft_atoi.h
	gcc -Wall -Wextra -Werror -c ft_atoi.c -o install/ft_atoi.o
clean fclean:
	rm -rf install/ bsq
install:
	mkdir install