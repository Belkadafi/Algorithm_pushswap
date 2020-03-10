##
## EPITECH PROJECT, 2019
## pushswap
## File description:
## Makefile
##

CFLAGS	=	-g3

SRC =	push_test.c	\
	pushswap_tester.c	\
	rotate_left_test.c	\
	rotate_right_test.c	\
	swap_test.c	\
	sort_test.c	\

OBJ	=	$(SRC:.c=.o)

NAME = test

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all