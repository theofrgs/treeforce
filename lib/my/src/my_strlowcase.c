/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** lowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] + 32;
        }
    }
    return (str);
}