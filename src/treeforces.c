/*
** EPITECH PROJECT, 2020
** treeforce
** File description:
** treeforces
*/

#include "my.h"
#include "treeforce.h"
#include "macros.h"
#include <stdio.h>
#include <unistd.h>

int treeforces(char **argv)
{
    int size = my_getnbr(argv[1]);
    int end_line = ((size * 2) - 1) * 2 + 1;
    int midle = (end_line + 1) / 2;

    for (int line = 0; line < size * 2; line++) {
        print_line(line, end_line, size, midle);
        my_putchar('\n');
    }
    return (0);
}