# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/25 14:52:23 by jkoers        #+#    #+#                  #
#    Updated: 2020/07/26 12:31:19 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# parse_dict_tests: ft_helpers.o parse_dict_tests.o parse_dict.o
# 	gcc -Wall -Wextra -Werror ft_helpers.o parse_dict_tests.o parse_dict.o -o parse_dict_tests
# parse_dict_tests.o: ../parse_dict.h
# 	gcc -Wall -Wextra -Werror -c parse_dict_tests.c
# parse_dict.o: ../parse_dict.c ../parse_dict.h ../ft_helpers.h
# 	gcc -Wall -Wextra -Werror -c ../parse_dict.c
# ft_helpers.o: ../ft_helpers.c ../ft_helpers.h
# 	gcc -Wall -Wextra -Werror -c ../ft_helpers.c
# clean:
# 	rm -f *.o parse_dict_tests

parse_dict_tests: ft_helpers.o parse_dict_tests.o parse_dict.o
	gcc ft_helpers.o parse_dict_tests.o parse_dict.o -o parse_dict_tests
parse_dict_tests.o: ../parse_dict.h
	gcc -c parse_dict_tests.c
parse_dict.o: ../parse_dict.c ../parse_dict.h ../ft_helpers.h
	gcc -c ../parse_dict.c
ft_helpers.o: ../ft_helpers.c ../ft_helpers.h
	gcc -c ../ft_helpers.c
clean:
	rm -f *.o parse_dict_tests