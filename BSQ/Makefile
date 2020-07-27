# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/24 14:54:00 by jkoers        #+#    #+#                  #
#    Updated: 2020/07/28 00:27:51 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

bsq:	install/main.o \
		install/load_map.o \
		install/ft_helpers.o \
		install/matrix_memory.o \
		install/canvas.o \
		install/fit_squares.o
	$(CC) $(CFLAGS) install/*.o -o bsq
install/main.o: main.c load_map.h canvas.h fit_squares.h
	$(CC) $(CFLAGS) -c main.c -o install/main.o
install/load_map.o: load_map.c load_map.h matrix_memory.h ft_helpers.h
	$(CC) $(CFLAGS) -c load_map.c -o install/load_map.o
install/ft_helpers.o: ft_helpers.c ft_helpers.h
	$(CC) $(CFLAGS) -c ft_helpers.c -o install/ft_helpers.o
install/matrix_memory.o: matrix_memory.c matrix_memory.h
	$(CC) $(CFLAGS) -c matrix_memory.c -o install/matrix_memory.o
install/canvas.o: canvas.c canvas.h load_map.h
	$(CC) $(CFLAGS) -c canvas.c -o install/canvas.o
install/fit_squares.o: fit_squares.c fit_squares.h
	$(CC) $(CFLAGS) -c fit_squares.c -o install/fit_squares.o

clean fclean:
	rm -rf install/ bsq
$(shell mkdir -p install)