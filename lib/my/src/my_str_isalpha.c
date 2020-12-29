/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** isalpha
*/

int my_str_isalpha(char const *str)
{
    int r;
    int i = 0;

    if (str[i] == '\0') {
        return (1);
    }
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= 122 && str[i] >= 97) || \
        (str[i] <= 90 && str[i] >= 65) || str[i] == ' ') {
            r = 1;
        }
        else {
            return (0);
        }
    }
    return (r);
}
