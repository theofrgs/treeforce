/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_arrdup
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **my_arrdup(char **arr)
{
    char **dest = malloc(sizeof(char*) * (arrlen((void**)arr) + 1));
    int index;

    for (index = 0; arr[index]; index++) {
        if (!(dest[index] = my_strdup(arr[index])))
            return (NULL);
    }
    dest[index] = NULL;
    return (dest);
}