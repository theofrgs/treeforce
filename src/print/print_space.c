/*
** EPITECH PROJECT, 2020
** treeforce
** File description:
** print_space
*/

#include "my.h"

void print_space(int line, int row, int midle)
{
    if (row + 1 <= midle + line)
        my_putchar(' ');
}