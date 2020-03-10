/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** push_test
*/

#include "pushswap_test.h"

void rev_list(list_t *list)
{
    int size = list->size;
    int i = list->size - 1;
    int tempo = 0;
    if (list->size > 1) {
        for (int j = 0; j < size / 2; j += 1, i -= 1) {
            tempo = list->list[i];
            list->list[i] = list->list[j];
            list->list[j] = tempo;
        }
    }
}

void push(list_t *list_a, list_t *list_b)
{
    if (list_b->size >= 1) {
        rev_list(list_b);
        rev_list(list_a);
        list_b->list[list_b->size] = list_a->list[list_a->size - 1];
        list_a->list[list_a->size - 1] = -18000;
        list_a->size -= 1;
        list_b->size += 1;
        rev_list(list_b);
        rev_list(list_a);
    }
}

void push_a(list_t *list_a, list_t *list_b)
{
    push(list_b, list_a);
}

void push_b(list_t *list_a, list_t *list_b)
{
    push(list_a, list_b);
}