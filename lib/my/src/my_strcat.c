/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** strcat
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    int x = 0;
    int k = my_strlen(dest);

    dest = my_realloc(dest, (my_strlen(src) + my_strlen(dest) + 1));
    if (!dest)
        return (NULL);
    for (; src[x] != '\0';k++) {
        dest[k] = src[x];
        x++;
    }
    dest[k] = '\0';
    return (dest);
}