/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** operations_test
*/

#include "pushswap_test.h"

void swap_elem(list_t *list, int index1, int index2)
{
    int tempo = list->list[index1];
    list->list[index1] = list->list[index2];
    list->list[index2] = tempo;
}

void swap_a(list_t *list_a, list_t *list_b)
{
    if (list_a->size > 1)
        swap_elem(list_a, 0, 1);
}

void swap_b(list_t *list_a, list_t *list_b)
{
    if (list_b->size > 1)
        swap_elem(list_b, 0, 1);
}

void swap_ab(list_t *list_a, list_t *list_b)
{
    if (list_a->size > 1)
        swap_elem(list_a, 0, 1);
    if (list_b->size > 1)
        swap_elem(list_b, 0, 1);
}