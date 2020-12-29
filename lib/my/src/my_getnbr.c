/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** getnbr
*/

int sign(int nb)
{
    if (nb != 0) {
        if (nb % 2 == 0)
            return (1);
        return (-1);
    }
    return (1);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            nb++;
        i++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result + (str[i] - 48);
            result = result * 10;
        }
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' \
&& str[i] <= 'Z'))
            return (result / 10 * sign(nb));
    }
    return (result / 10 * sign(nb));
}