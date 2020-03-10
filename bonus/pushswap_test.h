/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap_test
*/

#ifndef PUSHSWAP_TEST_H_
#define PUSHSWAP_TEST_H_

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct list_s
{
    int *list;
    int size;
} list_t;

typedef struct ptr_s
{
    char *str;
    void (*ptr)(list_t *, list_t *);
} ptr_t;

void swap_elem(list_t *list, int index1, int index2);
void rotate_left(list_t *list);
void rotate_right(list_t *list);
void swap_a(list_t *list_a, list_t *list_b);
void swap_b(list_t *list_a, list_t *list_b);
void swap_ab(list_t *list_a, list_t *list_b);
void rev_list(list_t *list);
void push(list_t *list_a, list_t *list_b);
void push_a(list_t *list_a, list_t *list_b);
void push_b(list_t *list_a, list_t *list_b);
void rotate_left(list_t *list);
void rotate_right(list_t *list);
void rotate_left_a(list_t *list_a, list_t *list_b);
void rotate_left_b(list_t *list_a, list_t *list_b);
void rotate_left_ab(list_t *list_a, list_t *list_b);
void rotate_right(list_t *list);
void rotate_right_a(list_t *list_a, list_t *list_b);
void rotate_right_b(list_t *list_a, list_t *list_b);
void rotate_right_ab(list_t *list_a, list_t *list_b);
int sort(list_t *list_a, list_t *list_b, char **command);

#endif /* !PUSHSWAP_TEST_H_ */