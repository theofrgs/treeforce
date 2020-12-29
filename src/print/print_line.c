/*
** EPITECH PROJECT, 2020
** treeforce
** File description:
** print_line
*/

#include "my.h"
#include "treeforce.h"

void print_line(int line, int end_line, int size, int midle)
{
    for (int row = 0; row < end_line; row++) {
        if (row == 0 && line == 0)
            my_putchar('.');
        else
            print_force(line, row, size, midle);
    }
}