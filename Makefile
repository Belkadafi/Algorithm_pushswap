##
## EPITECH PROJECT, 2019
## my_hunter
## File description:
## Makefile
##

CFLAGS = -W -Wall -Wextra -g3 -I./include

C_LIB = -I./include -L./lib/my -lmy

SRC = pushswap.c \
	operations.c \
	get_lists.c \

OBJ = $(SRC:.c=.o)

NAME = push_swap

all	: $(NAME)

$(NAME)	:	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(C_LIB)

clean	:
	rm -f $(OBJ)
	make clean -C lib/my

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all

test	:	all
	make -C bonus
	mv bonus/test .