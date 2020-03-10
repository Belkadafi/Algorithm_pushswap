/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap_tester
*/

#include "pushswap_test.h"

int word_len(char *str)
{
    int i = 0;

    if (str[0] == ' ')
        i += 1;
    while (str[i] != ' ' && str[i] != '\0')
        i += 1;
    i += 1;
    return i;
}

char **parser(char *str)
{
    int nb_words = 0;
    char **tab;
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == ' ')
            nb_words += 1;
    }
    nb_words += 1;
    tab = malloc(sizeof(char *) * (nb_words + 1));
    for (int i = 0; i <= nb_words; i += 1) {
        tab[i] = malloc(sizeof(char) * (word_len(&str[j]) + 1));
        if (str[j] == ' ')
            j += 1;
        for (k = 0; str[j] != ' ' && str[j] != '\0'; j += 1, k += 1)
            tab[i][k] = str[j];
        tab[i][k] = 0;
    }
    tab[nb_words] = NULL;
    return(tab);
}

char *my_realloc(char *command, int i, int l)
{
    int j = 0;
    int k = 0;
    char *tempo = malloc(sizeof(char) * (l + 2));

    for (; k != l + 1; k += 1)
        tempo[k] = command[k];
    tempo[k] = 0;
    return tempo;
}

list_t get_unsorted(char **tab, int size, list_t *list_b)
{
    list_t list_a;
    list_a.list = malloc(sizeof(int) * size);
    for (int i = 0; tab[i] != NULL; i += 1) {
        list_a.list[i] = atoi(tab[i]);
        list_b->list[i] = -18000;
    }
    list_a.list[size - 1] = -18000;
    list_b->list[size - 1] = -18000;
    list_a.size = size - 1;
    list_b->size = 0;
    return (list_a);
}

int main(int ac, char **av)
{
    char tempo[1];
    char *command = malloc(sizeof(char) * 2);
    char **commands;
    int i = 0;
    list_t list_a;
    list_t list_b;

    list_b.list = malloc(sizeof(int) * (ac - 1));
    list_a = get_unsorted(&av[1], ac, &list_b);
    *tempo = 0;
    command[0] = 0;
    command[1] = 0;
    for (; *tempo != '\n'; i += 1) {
        read(0, tempo, 1);
        command[i] = tempo[0];
        command = my_realloc(command, 1, i);
    }
    command[i - 1] = '\0';
    commands = parser(command);
    if (sort(&list_a, &list_b, commands))
        printf("SORTED\n");
    else
        printf("NOT SORTED\n");
}