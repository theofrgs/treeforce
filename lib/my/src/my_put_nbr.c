/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** number
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int result = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb >= 10) {
        result = nb % 10;
        nb /= 10;
        my_put_nbr(nb);
        my_putchar(result +'0');
    }
    else
        my_putchar(nb + '0');
}
