/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "macros.h"
#include <stdio.h>

int main(void)
{
    char *str = my_strdup("hello world");
    char **arr = str_array(str, " ");
    char **test = my_arrdup(arr);

    my_put_arr((void **)test, "char");
    free_arr((void **)test);
    return (SUCCESS);
}
