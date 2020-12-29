/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** copie string
*/
#include <stdlib.h>
#include "my.h"

char *my_strcpy(char *dest, char *src)
{
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}