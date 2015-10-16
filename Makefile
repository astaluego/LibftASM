# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aderuell <aderuell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/02 15:45:13 by aderuell          #+#    #+#              #
#    Updated: 2015/10/16 17:17:08 by aderuell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./src/
SRC_NAME =	ft_bzero.s\
			ft_strcat.s\
			ft_isalpha.s\
			ft_isdigit.s\
			ft_isalnum.s\
			ft_isascii.s\
			ft_isprint.s\
			ft_toupper.s\
			ft_tolower.s\
			ft_strlen.s\
			ft_puts.s\
			ft_memset.s\
			ft_memcpy.s

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.s=.o)

NAME = libfts.a

CC = nasm
CFLAGS = -f macho64

LD = ar rc

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(LD) $@ $(OBJ)
	ranlib $@
	@echo done!

$(OBJ_PATH)%.o: $(SRC_PATH)%.s
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	@echo .
	$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	@rm -fv $(NAME)
	@rm -fv a.out

test: all
	gcc src/main.c libfts.a

re: fclean all
