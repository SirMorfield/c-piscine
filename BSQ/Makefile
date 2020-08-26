# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jkoers <jkoers@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/24 14:54:00 by jkoers        #+#    #+#                  #
#    Updated: 2020/08/26 22:50:10 by joppe         ########   odam.nl          #
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




CXX ?= g++

# path #
SRC_PATH = src
BUILD_PATH = build
BIN_PATH = $(BUILD_PATH)/bin

# executable #
BIN_NAME = runner

# extensions #
SRC_EXT = cpp

# code lists #
# Find all source files in the source directory, sorted by
# most recently modified
SOURCES = $(shell find $(SRC_PATH) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)
# Set the object file names, with the source directory stripped
# from the path, and the build path prepended in its place
OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)
# Set the dependency files that will be used to add header dependencies
DEPS = $(OBJECTS:.o=.d)

# flags #
COMPILE_FLAGS = -std=c++11 -Wall -Wextra -g
INCLUDES = -I include/ -I /usr/local/include
# Space-separated pkg-config libraries used by this project
LIBS =

.PHONY: default_target
default_target: release

.PHONY: release
release: export CXXFLAGS := $(CXXFLAGS) $(COMPILE_FLAGS)
release: dirs
	@$(MAKE) all

.PHONY: dirs
dirs:
	@echo "Creating directories"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(BIN_PATH)

.PHONY: clean
clean:
	@echo "Deleting $(BIN_NAME) symlink"
	@$(RM) $(BIN_NAME)
	@echo "Deleting directories"
	@$(RM) -r $(BUILD_PATH)
	@$(RM) -r $(BIN_PATH)

# checks the executable and symlinks to the output
.PHONY: all
all: $(BIN_PATH)/$(BIN_NAME)
	@echo "Making symlink: $(BIN_NAME) -> $<"
	@$(RM) $(BIN_NAME)
	@ln -s $(BIN_PATH)/$(BIN_NAME) $(BIN_NAME)

# Creation of the executable
$(BIN_PATH)/$(BIN_NAME): $(OBJECTS)
	@echo "Linking: $@"
	$(CXX) $(OBJECTS) -o $@ ${LIBS}

# Add dependency files, if they exist
-include $(DEPS)

# Source file rules
# After the first compilation they will be joined with the rules from the
# dependency files to provide header dependencies
