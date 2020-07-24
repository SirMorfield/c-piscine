# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/24 16:49:16 by jkoers        #+#    #+#                  #
#    Updated: 2020/07/24 17:52:22 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

grid_tests: grid_tests.o grid.o
	gcc -Wall -Wextra -Werror grid.o grid_tests.o -o grid_tests
grid_tests.o: grid_tests.c ../grid.h
	gcc -Wall -Wextra -Werror -c grid_tests.c
grid.o: ../grid.c
	gcc -Wall -Wextra -Werror -c ../grid.c
clean:
	rm -f *.o grid_tests