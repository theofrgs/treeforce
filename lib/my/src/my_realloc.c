/*
** EPITECH PROJECT, 2019
** realloc
** File description:
** my_realloc
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **realloc_my_arr(char **arr, int size)
{
    char **tmp = my_arrdup(arr);
    int i = 0;

    if (!tmp)
        return (NULL);
    if (!(arr = malloc(sizeof(char*) * size)))
        return (NULL);
    for (; tmp[i]; i++) {
        if (!(arr[i] = my_strdup(tmp[i])))
            return (NULL);
    }
    arr[size - 1] = NULL;
    free_arr((void**)tmp);
    return (arr);
}

char *my_realloc(char *str, int size)
{
    char *tmp = NULL;

    tmp = my_strcpy(tmp, str);
    str = malloc(sizeof(char) * size);
    if (!str)
        return (NULL);
    for (int i = 0; tmp[i] != '\0'; i++)
        str[i] = tmp[i];
    str[my_strlen(tmp)] = '\0';
    free(tmp);
    return (str);
}