# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juljin <juljin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 14:56:21 by juljin            #+#    #+#              #
#    Updated: 2025/09/29 14:53:18 by juljin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SDIR = srcs
HDIR = includes

# Source files
SFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# no specific need to specify the directory like srcs/ft_putchar.c 

# takes files in SFILES and turn the .c to .o
# need to define the directory so it outputs them there
OBJS = $(SFILES:%.c=$(SDIR)/%.o)

all: $(NAME)

# (%.o) is the target, (%.c) is the prerequisite.
# Then it takes the variables CC, CFLAGS and compile with (-c) ;
# The option (-c) means compile only, don't link.
# $(variable_name) calls the variable.
# The option (-I) tells where to look for header files.
# $< is an automatic variable, outputs the first prerequisite.
# $@ is an automatic variable, outputs the target name (%.o) here.

$(SDIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -I $(HDIR) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# The (-s) option is to generate the index (symbol table).
# Same as doing : ranlib $(NAME) after ar rc.

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
