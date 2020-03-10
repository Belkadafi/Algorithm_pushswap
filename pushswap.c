/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#include "pushswap.h"

int is_sorted(list_t *list_a)
{
    for (int i = 0; i < list_a->size - 1; i += 1) {
        if (list_a->list[i] > list_a->list[i + 1])
            return 0;
    }
    return 1;
}

void transpose(list_t *list_a, list_t *list_b)
{
    int size = list_a->size;

    if (!is_sorted(list_a)) {
        for (int i = 0; i < size; i += 1) {
            push(list_a, list_b);
            write(1, "pb ", 3);
        }
    }
}

void sort(list_t *list_a, list_t *list_b, int big)
{
    if (list_b->list[1] == big)
        swap(list_b);
    push(list_b, list_a);
    write(1, "pa", 2);
    if (list_b->size >= 1)
        write(1, " ", 1);
}

void pushswap(list_t *list_a, list_t *list_b)
{
    int i = 0;
    int big = 0;

    transpose(list_a, list_b);
    while (list_b->size > 0) {
        big = bigger(list_b, &i);
        while (list_b->list[0] != big &&
        list_b->list[1] != big) {
            if (i <= list_b->size / 2) {
                rotate_left(list_b);
                write(1, "rb ", 3);
            }
            else {
                rotate_right(list_b);
                write(1, "rrb ", 4);
            }
        }
        sort(list_a, list_b, big);
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    list_t list_a;
    list_t list_b;

    if (ac == 1) {
        write(2, "Missing arguments\n", 19);
        return 84;
    }
    list_b.list = malloc(sizeof(int) * (ac - 1));
    list_a = get_list(&av[1], ac, &list_b);
    if (list_a.size == -9) {
        write(2, "Invalid arguments\n", 19);
        return 84;
    }
    pushswap(&list_a, &list_b);
}