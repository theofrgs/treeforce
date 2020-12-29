/*
** EPITECH PROJECT, 2019
** my_putnbr_base.c
** File description:
** my_putnbr_base
*/
#include "my.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

char *base_min(int base, long nb)
{
    char *memory = malloc(sizeof(char) * nb);
    int i;
    int r = 1;
    int rest = nb;

    for (i = 0; r != 0; i++) {
        if (nb > base)
            rest = nb % base;
        else {
            rest = nb;
            r = 0;
        }
        if (rest < 10)
            memory[i] = (rest + 48);
        else
            memory[i] = rest + 87;
        nb = (nb - rest) / base;
    }
    memory[i] = '\0';
    return (my_revstr(memory));
}

char *base_maj(unsigned int base, long nb)
{
    char *memory = malloc(sizeof(char) * nb);
    int i;
    int r = 1;
    int rest = nb;

    for (i = 0; r != 0; i++) {
        if (nb > base)
            rest = nb % base;
        else {
            rest = nb;
            r = 0;
        }
        if (rest < 10)
            memory[i] = (rest + 48);
        else
            memory[i] = rest + 55;
        nb = (nb - rest) / base;
    }
    memory[i] = '\0';
    return (my_revstr(memory));
}

char *base_octal(unsigned int base, long nb)
{
    char *memory = malloc(sizeof(char) * nb);
    int i;
    int r = 1;
    int rest = nb;

    for (i = 0; r != 0; i++) {
        if (nb > base)
            rest = nb % base;
        else {
            rest = nb;
            r = 0;
        }
        if (rest < 10)
            memory[i] = (rest + 48);
        else
            memory[i] = rest + 55;
        nb = (nb - rest) / base;
    }
    memory[i] = '\0';
    return (my_revstr(memory));
}

char *my_putnbr_base(int base, int nb, char c)
{
    if (c == 'x')
        return (base_min(base, nb));
    if (c == 'X')
        return (base_maj(base, nb));
    if (c == 'o')
        return (base_octal(base, nb));
    if (c == 'p')
        my_putstr("0x");
    return (base_min(base, nb));
}