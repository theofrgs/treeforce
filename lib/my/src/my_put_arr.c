/*
** EPITECH PROJECT, 2020
** my_stumper
** File description:
** my_put_arr
*/

#include "my.h"

void my_put_arr(void **arr, char *type)
{
    if (my_strcmp(type, "int", 0) == 0) {
        for (int i = 0; arr[i]; i++)
            my_printf("%i\n", arr[i]);
    }
    if (my_strcmp(type, "char", 0) == 0) {
        for (int i = 0; arr[i]; i++)
            my_printf("%s\n", arr[i]);
    }
}