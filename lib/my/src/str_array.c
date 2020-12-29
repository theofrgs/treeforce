/*
** EPITECH PROJECT, 2020
** strarray
** File description:
** str_array
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int check_word(char c, char *word)
{
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == c || c == '\0')
            return (1);
    }
    return (0);
}

int get_nbr_wrd(char *str, char *word)
{
    int i = 0;
    int n = 0;

    while (str[i + 1] != '\0') {
        if (check_word(str[i], word) == 1 && \
            check_word(str[i + 1], word) == 0)
            n++;
        i++;
    }
    return (n);
}

int skip_word(int x, char *str, char *word)
{
    if (x > my_strlen(str))
        return (x);
    while (check_word(str[x], word) == 1)
        x++;
    return (x);
}

char **str_array(char *str, char *word)
{
    char **tab = malloc(sizeof(char *) * (get_nbr_wrd(str, word) + 2));
    int i = 0;

    for (int x = 0, r = 0, n = 0, size_word = 0; i != get_nbr_wrd(str, word) \
    + 1; i++, x++, n = 0, r = 0) {
        x = skip_word(x, str, word);
        for (size_word = x; check_word(str[size_word], word) == 0; \
        size_word++);
        tab[i] = malloc(sizeof(char) * (size_word - x + 1));
        for (; check_word(str[x], word) == 0; x++, n++)
            tab[i][n] = str[x];
        if (x > my_strlen(str) && check_word(tab[i][n], word) == 0) {
            tab[i][n] = str[x];
            r = 1;
        }
        tab[i][n + r] = '\0';
    }
    tab[i] = NULL;
    return (tab);
}