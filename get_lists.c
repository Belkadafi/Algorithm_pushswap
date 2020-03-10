/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** get_lists
*/

#include "pushswap.h"

int bigger(list_t *list, int *j)
{
    int bigger = list->list[0];

    *j = 0;
    for (int i = 0; i <= list->size - 1; i += 1)
        if (list->list[i] > bigger) {
            bigger = list->list[i];
            *j = i;
        }
    return bigger;
}

int array_len(int *list)
{
    int i = 0;
    while (list[i] != 0)
        i += 1;
    return (i);
}

void swap(list_t *list)
{
    int tmp = list->list[0];
    list->list[0] = list->list[1];
    list->list[1] = tmp;
    write(1, "sb ", 3);
}

list_t get_list(char **tab, int size, list_t *list_b)
{
    list_t list_a;
    int test = 0;

    list_a.list = malloc(sizeof(int) * size);
    for (int i = 0; tab[i] != NULL; i += 1) {
        if (!my_str_isnum(tab[i])) {
            test = 1;
            break;
        }
        list_a.list[i] = my_getnbr(tab[i]);
        list_b->list[i] = -18000;
    }
    list_a.list[size - 1] = -18000;
    list_b->list[size - 2] = -18000;
    list_a.size = size - 1;
    if (test == 1)
        list_a.size = -9;
    list_b->size = 0;
    return (list_a);
}