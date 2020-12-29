/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** isnum
*/

int my_str_isnum(char const *str)
{
    int r;
    int i = 0;

    if (str[i] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 57 && str[i] >= 48) {
            r = 1;
        }
        else {
            return (0);
        }
    }
    return (r);
}
