/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** operations
*/

#include "pushswap.h"

void swap_elem(list_t *list, int index1, int index2)
{
    int tempo = list->list[index1];
    list->list[index1] = list->list[index2];
    list->list[index2] = tempo;
}

void rotate_left(list_t *list)
{
    int size = list->size;

    for (int i = 0; i + 1 < size; i += 1)
        swap_elem(list, i, i +1);
}

void rotate_right(list_t *list)
{
    int size = list->size;

    for (int i = size - 1; i > 0; i -= 1)
        swap_elem(list, i, i -1);
}

void rev_list(list_t *list)
{
    int size = list->size;
    int i = list->size - 1;
    int tempo = 0;

    for (int j = 0; j < size / 2; j += 1, i -= 1) {
        tempo = list->list[i];
        list->list[i] = list->list[j];
        list->list[j] = tempo;
    }
}

void push(list_t *list_a, list_t *list_b)
{
    rev_list(list_b);
    rev_list(list_a);
    list_b->list[list_b->size] = list_a->list[list_a->size - 1];
    list_a->list[list_a->size - 1] = -18000;
    list_a->size -= 1;
    list_b->size += 1;
    rev_list(list_b);
    rev_list(list_a);
}