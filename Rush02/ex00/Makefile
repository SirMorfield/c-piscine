# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 14:18:49 by jkoers        #+#    #+#                  #
#    Updated: 2020/07/26 19:45:19 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

rush-02: install install/main.o install/do_magic.o install/find.o install/parse_dict.o install/ft_helpers.o
	gcc -Wall -Wextra -Werror install/*.o -o rush-02
install/main.o: install main.c parse_dict.h do_magic.h ft_helpers.h
	gcc -Wall -Wextra -Werror -c main.c -o install/main.o
install/do_magic.o: install do_magic.c do_magic.h parse_dict.h ft_helpers.h find.h
	gcc -Wall -Wextra -Werror -c do_magic.c -o install/do_magic.o
install/find.o: install find.c find.h do_magic.h ft_helpers.h parse_dict.h
	gcc -Wall -Wextra -Werror -c find.c -o install/find.o
install/parse_dict.o: install parse_dict.c parse_dict.h ft_helpers.h
	gcc -Wall -Wextra -Werror -c parse_dict.c -o install/parse_dict.o
install/ft_helpers.o: install ft_helpers.c ft_helpers.h
	gcc -Wall -Wextra -Werror -c ft_helpers.c -o install/ft_helpers.o
clean fclean:
	rm -Rf install/ rush-02
install:
	mkdir install