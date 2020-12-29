/*
** EPITECH PROJECT, 2020
** my_stumper
** File description:
** free_arr
*/

#include <stdlib.h>

void free_arr(void **arr)
{
    for (int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}