/*
** EPITECH PROJECT, 2019
** sources
** File description:
** my_str_to_word_array.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int check_sprtr(char c)
{
    if (c == ' ' || c == ',' || c == '\0' || c == ' ' || c == '\t' || \
        c == 9 || c == '\n')
        return (1);
    return (0);
}

int get_nbr_word(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (check_sprtr(str[i + 1]) == 1 && check_sprtr(str[i]) == 0)
            n++;
        i++;
    }
    return (n);
}

int skip_space(int x, char *str)
{
    while (check_sprtr(str[x]) == 1)
        x++;
    return (x);
}

char **my_str_to_word_array(char *str)
{
    char **tab = malloc(sizeof(char *) * (get_nbr_word(str) + 2));
    int i = 0;
    int n = 0;
    int size_word = 0;

    for (int x = 0, r = 0; i != get_nbr_word(str); i++, x++, n = 0, r = 0) {
        x = skip_space(x, str);
        for (size_word = x; check_sprtr(str[size_word]) == 0; size_word++);
        tab[i] = malloc(sizeof(char) * (size_word - x + 1));
        for (; check_sprtr(str[x]) == 0; x++, n++)
            tab[i][n] = str[x];
        if (str[x] != ' ' && str[x] != 9 && str[x] != '\0') {
            tab[i][n] = str[x];
            r = 1;
        }
        tab[i][n + r] = '\0';
    }
    tab[i] = NULL;
    return (tab);
}