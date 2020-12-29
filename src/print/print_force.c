/*
** EPITECH PROJECT, 2020
** treeforce
** File description:
** print_force
*/

#include "my.h"
#include "treeforce.h"

void print_force(int line, int row, int size, int midle)
{
    if (line >= size) {
        if ((row + 1 <= midle + line && row + 1 >= midle - line && row \
            <= midle - size + (line - size - 1)) || (row + 1 <= midle + \
            line && row + 1 >= midle - line && row >= midle + size - \
            (line - size + 1)))
            my_putchar('*');
        else
            print_space(line, row, midle);
    } else {
        if (row + 1 <= midle + line && row + 1 >= midle - line)
            my_putchar('*');
        else
            print_space(line, row, midle);
    }
}