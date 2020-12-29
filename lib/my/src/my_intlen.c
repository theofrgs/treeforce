/*
** EPITECH PROJECT, 2019
** my_intlen.c
** File description:
** my_intlen.c
*/

int my_intlen(int *tab)
{
    int i;

    for (i = 0; tab[i] != '\0'; i++);
    return (i);
}
