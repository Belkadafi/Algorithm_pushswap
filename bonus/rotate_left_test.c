/*
** EPITECH PROJECT, 2019
** pushwap
** File description:
** rotate_test
*/

#include "pushswap_test.h"

void rotate_left(list_t *list)
{
    int size = list->size;

    for (int i = 0; i + 1 < size; i += 1)
        swap_elem(list, i, i +1);
}

void rotate_left_a(list_t *list_a, list_t *list_b)
{
    rotate_left(list_a);
}

void rotate_left_b(list_t *list_a, list_t *list_b)
{
    rotate_left(list_b);
}

void rotate_left_ab(list_t *list_a, list_t *list_b)
{
    rotate_left(list_a);
    rotate_left(list_b);
}