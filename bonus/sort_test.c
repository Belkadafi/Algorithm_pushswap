/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** sort_test
*/

#include "pushswap_test.h"

static const ptr_t tab[] =
{
    {"sa", swap_a},
    {"sb", swap_b},
    {"sc", swap_ab},
    {"pa", push_a},
    {"pb", push_b},
    {"ra", rotate_left_a},
    {"rb", rotate_left_b},
    {"rr", rotate_left_ab},
    {"rra", rotate_right_a},
    {"rrb", rotate_right_b},
    {"rrr", rotate_right_ab},
    {NULL}
};

int is_sorted(list_t *list_a, list_t *list_b)
{
    if (list_b->size != 0)
        return 0;
    for (int i = 0; i + 1 < list_a->size; i += 1) {
        if (list_a->list[i] > list_a->list[i + 1])
            return 0;
    }
    return 1;
}

int sort(list_t *list_a, list_t *list_b, char **command)
{
    for (int i = 0; command[i] != NULL; i += 1) {
        for (int j = 0; tab[j].str != NULL; j += 1) {
            if (strcmp(command[i], tab[j].str) == 0) {
                tab[j].ptr(list_a, list_b);
            }
        }
        for (int i = 0; i < list_a->size; i += 1)
            printf("%d\n", list_a->list[i]);
        printf("LA RUE\n");
    }
    for (int i = 0; i < list_a->size; i += 1)
        printf("%d\n", list_a->list[i]);
    return (is_sorted(list_a, list_b));
}