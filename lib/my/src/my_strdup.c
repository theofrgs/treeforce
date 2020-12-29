/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char *src)
{
    char *result = malloc(sizeof(char) * (my_strlen(src) + 1));
    int index = 0;

    for (; src[index] != '\0'; index++)
        result[index] = src[index];
    result[index] = '\0';
    return (result);
}