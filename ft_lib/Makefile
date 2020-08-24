# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by joppe         #+#    #+#                  #
#    Updated: 2020/08/24 14:54:38 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME      	:= program

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror

SRCDIR      := .
BUILDDIR    := obj
SRCEXT      := c
OBJEXT      := o

SOURCES     := $(shell find $(SRCDIR) -type f -name '*.$(SRCEXT)')
OBJECTS     := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

$(NAME): all

all: directories $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(BUILDDIR)/*

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

directories:
	@mkdir -p $(BUILDDIR)
# @echo "Compiling: $< -> $@"
$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -c $< -o $@
