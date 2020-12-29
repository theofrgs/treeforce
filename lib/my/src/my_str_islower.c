/*
** EPITECH PROJECT, 2019
** my_str_islower.c
** File description:
** islower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97 || str[i] > 122)
            return (0);
    }
    return (1);
}