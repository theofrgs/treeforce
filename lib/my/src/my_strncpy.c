/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** copies n character
*/

#include "my.h"
#include <stdlib.h>

char *rev_strncpy(char *src, int n)
{
    int index = 0;
    char *tmp = my_strdup(src);

    src = malloc(sizeof(char) * (my_strlen(tmp) - n + 1));
    if (!src)
        return (NULL);
    while (tmp[index + n] != '\0') {
        src[index] = tmp[n + index];
        index++;
    }
    src[index] = '\0';
    return (src);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int x = 0; x < n; x++) {
        dest[x] = src[x];
        if (src[x] == '\0' || dest[x] == ('\0' - 1))
            dest[x] = '\0';
    }
    return (dest);
}