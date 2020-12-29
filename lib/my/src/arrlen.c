/*
** EPITECH PROJECT, 2020
** my_stumper
** File description:
** arrlen
*/

#include <stdlib.h>
#include "my.h"

int arrlen(void **arr)
{
    int size;

    for (size = 0; arr[size] != NULL; size++);
    return (size--);
}