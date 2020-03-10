##
## EPITECH PROJECT, 2019
## my_hunter
## File description:
## Makefile
##

CFLAGS = -W -Wall -Wextra -g3 -I./../../include

SRC =	my_compute_power_rec.c \
	my_isneg.c \
	my_putnbr_base.c \
	my_showstr.c \
	my_strcpy.c \
	my_str_isprintable.c \
	my_strncmp.c \
	my_swap.c \
	my_compute_square_root.c \
	my_is_prime.c \
	my_put_nbr.c \
	my_strdup.c \
	my_str_isupper.c \
	my_strncpy.c \
	my_find_prime_sup.c \
	my_putstr.c \
	my_strcapitalize.c \
	my_str_isalpha.c \
	my_strlen.c \
	my_strstr.c \
	my_getnbr_base.c \
	my_revstr.c \
	my_strcat.c \
	my_str_islower.c \
	my_strlowcase.c \
	my_str_to_word_array.c \
	my_getnbr.c \
	my_putchar.c \
	my_showmem.c \
	my_strcmp.c \
	my_str_isnum.c \
	my_strncat.c \
	my_strupcase.c \

OBJ = $(SRC:.c=.o)

NAME = my_sokoban

all	: $(OBJ)
	ar rc libmy.a $(OBJ)

clean	:
	rm -f $(OBJ)
	rm -f libmy.a

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all