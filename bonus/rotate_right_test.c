/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** rotate_right_test
*/

#include "pushswap_test.h"

void rotate_right(list_t *list)
{
    int size = list->size;

    for (int i = size - 1; i >= 0; i -= 1)
        swap_elem(list, i, i -1);
}

void rotate_right_a(list_t *list_a, list_t *list_b)
{
    rotate_right(list_a);
}

void rotate_right_b(list_t *list_a, list_t *list_b)
{
    rotate_right(list_b);
}

void rotate_right_ab(list_t *list_a, list_t *list_b)
{
    rotate_right(list_a);
    rotate_right(list_b);
}