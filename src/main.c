/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/


#include "my.h"
#include "treeforce.h"
#include "macros.h"
#include <stdio.h>
#include <unistd.h>


int main(int ac, char **argv)
{
    if (ac != 2)
        return (1);
    treeforces(argv);
    return (0);
}