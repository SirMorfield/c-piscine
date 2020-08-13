# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/24 14:54:00 by jkoers        #+#    #+#                  #
#    Updated: 2020/08/13 22:40:23 by mraasvel      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# NAME = BSQ

# $(NAME): all

# all: 	install/main.o \
# 		install/canvas.o \
# 		install/load_map.o \
# 		install/matrix_memory.o \
# 		install/fit_squares.o \
# 		install/ft_helpers1.o \
# 		install/ft_helpers2.o
# 	$(CC) $(CFLAGS) install/*.o -o $(NAME)
# install/main.o: main.c load_map.h canvas.h helpers/ft_helpers2.h
# 	$(CC) $(CFLAGS) -c main.c -o install/main.o
# install/canvas.o: 	canvas.c canvas.h load_map.h helpers/ft_file.h \
# 					helpers/matrix_memory.h
# 	$(CC) $(CFLAGS) -c canvas.c -o install/canvas.o
# install/load_map.o:	load_map.c load_map.h helpers/matrix_memory.h \
# 					helpers/ft_helpers1.h helpers/ft_helpers2.h
# 	$(CC) $(CFLAGS) -c load_map.c -o install/load_map.o
# install/matrix_memory.o: helpers/matrix_memory.c helpers/matrix_memory.h
# 	$(CC) $(CFLAGS) -c helpers/matrix_memory.c -o install/matrix_memory.o
# install/fit_squares.o:fit_squares.c fit_squares.h canvas.h
# 	$(CC) $(CFLAGS) -c fit_squares.c -o install/fit_squares.o
# install/ft_helpers1.o: helpers/ft_helpers1.c helpers/ft_helpers1.h
# 	$(CC) $(CFLAGS) -c helpers/ft_helpers1.c -o install/ft_helpers1.o
# install/ft_helpers2.o: helpers/ft_helpers2.c helpers/ft_helpers2.h
# 	$(CC) $(CFLAGS) -c helpers/ft_helpers2.c -o install/ft_helpers.o
# # install/obstacle.o: obstacle.c obstacle.h
# # 	$(CC) $(CFLAGS) -c obstacle.c -o install/obstacle.o
# clean:
# 	rm -rf install/ bsq
# fclean: clean
# 	rm -f $(NAME)
# re: fclean all

# .PHONY: clean fclean re
# $(shell mkdir -p install)


# -*- MakeFile -*-

#target: dependencies
#	action with tab beggining

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = BSQ

SRCS = *.c helpers/*.c

HEADERS = *.h helpers/*.h
OBJECTS = *.o

DEBUG = -O0 -g -fsanitize=address


$(NAME): all

all: $(HEADERS) $(SRCS)
	$(CC) -o $(DEBUG) $(NAME) $(CFLAGS) $(SRCS)

clean:
	/bin/rm -f $(OBJECTS)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all