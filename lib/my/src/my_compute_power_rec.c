/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** result
*/

int my_compute_power_rec(int nb, int p)
{
    int r = nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    r = r * my_compute_power_rec(nb, p - 1);
    return (r);
}