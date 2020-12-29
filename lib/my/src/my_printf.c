/*
** EPITECH PROJECT, 2019
** printf.c
** File description:
** my_printf
*/
#include "my.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_float(float x, char *format, int n)
{
    int power = format[n + 2] - 48;
    int nb1 = x * (my_compute_power_rec(10, power));
    int nb2 = nb1 % (my_compute_power_rec(10, power));

    my_put_nbr(nb2 / (my_compute_power_rec(10, power)));
    my_putchar('.');
    my_put_nbr(nb2);
    return (0);
}

int check_float(char *format, int i)
{
    if (format[i] == '%' && format[i + 1] == '.' && \
0 < (format[i + 2] - 48) && (format[i + 2] - 48) < 10 && \
format[i + 3] == 'f')
        return (1);
    return (0);
}

int show(char c, va_list ap)
{
    if (c == 's' || c == 'S')
        my_putstr(va_arg(ap, char *));
    if (c == 'c')
        my_putchar(va_arg(ap, int));
    if (c == 'i')
        my_put_nbr(va_arg(ap, int));
    if (c == 'u')
        my_put_nbr_unsigned(va_arg(ap, unsigned int));
    if (c == 'x' || c == 'X')
        my_putstr(my_putnbr_base(16, va_arg(ap, int), c));
    if (c == 'o')
        my_putstr(my_putnbr_base(8, va_arg(ap, int), c));
    if (c == 'p')
        my_putstr(my_putnbr_base(16, va_arg(ap, int), c));
    if (c == 'a')
        my_putstr("0x0p+0");
    return (0);
}

int check_print(char *format, int i, va_list ap)
{
    if (format[i + 1] == 's' || format[i + 1] == 'c' || \
    format[i + 1] == 'i' || format[i + 1] == 'u' || format[i + 1] == 'x' || \
    format[i + 1] == 'X' || format[i + 1] == 'o' || format[i + 1] == 'S' || \
    format[i + 1] == 'p' || format[i + 1] == 'a') {
        show(format[i + 1], ap);
        i++;
    }
    if (check_float(format, i) == 1) {
        print_float(va_arg(ap, double), format, i);
        i += 3;
    }
    return (i);
}

int my_printf(char *const format, ...)
{
    va_list ap;
    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if ((format[i] == '%' && format[i + 1] == 's') || \
(format[i] == '%' && format[i + 1] == 'c') || \
(format[i] == '%' && format[i + 1] == 'i') || \
(format[i] == '%' && format[i + 1] == 'u') || (format[i] == '%' && \
format[i + 1] == 'x') || \
(format[i] == '%' && format[i + 1] == 'X') || (format[i] == '%' && \
format[i + 1] == 'o') || \
(format[i] == '%' && format[i + 1] == 'S') || (format[i] == '%' && \
format[i + 1] == 'p') || \
(format[i] == '%' && format[i + 1] == 'a'))
            i = check_print(format, i, ap);
        else
            my_putchar(format[i]);
    }
    va_end(ap);
    return (0);
}