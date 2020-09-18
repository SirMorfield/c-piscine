# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by joppe         #+#    #+#                  #
#    Updated: 2020/09/11 16:09:07 by joppe         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME      	:= libft

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror

TESTSDIR	:= ./tests/
SRCDIR      := .
BUILDDIR    := obj
SRCEXT      := c
OBJEXT      := o

TESTSOURCES	:= $(shell find $(TESTDIR) -type f -name '*.$(SRCEXT)')
TESTPROGRAMS := $(patsubst $(TESTDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))
SOURCES     := $(shell find -not -path '$(TESTDIR)' $(SRCDIR) -type f -name '*.$(SRCEXT)')
OBJECTS     := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

$(NAME): all

all: directories $(OBJECTS)
	$(CC) -shared -o $(BUILDDIR)/$(NAME).so $(OBJECTS) -lm

tests: directories $(OBJECTS)
	$(TESTDIR)/%.$(SRCEXT): $(SRCDIR)/%.$(SRCEXT)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(BUILDDIR)/*

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

directories:
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(TESTDIR)

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -c $< -o $@
