/*
** EPITECH PROJECT, 2019
** my_put_nbr_unsigned.c
** File description:
** unsigned
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

unsigned int my_put_nbr_unsigned(unsigned int nb)
{
    int result;

    if (nb >= 10) {
        result = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(result +'0');
    }
    else
        my_putchar(nb + '0');
    return (0);
}