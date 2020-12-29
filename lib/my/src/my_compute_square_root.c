/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** racine
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    while ((i * i) != nb) {
        i++;
        if (i > nb) {
            return (0);
        }
    }
    return (i);
}