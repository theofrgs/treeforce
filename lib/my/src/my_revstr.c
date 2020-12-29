/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverse a string
*/

#include "my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;
    int n = 0;

    if (!dest)
        return (NULL);
    for (n = my_strlen(str) - 1; n >= 0; n--, i++)
        dest[i] = str[n];
    dest[i] = '\0';
    str = my_strcpy(str, dest);
    free(dest);
    return (str);
}