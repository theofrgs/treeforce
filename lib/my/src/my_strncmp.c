/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int value = 0;

    for (int i = 0; s1[i] != s1[n] && s2[i] != s2[n]; i++) {
        if (s1[i] != s2[i]) {
            value = s1[i] - s2[i];
            return (value);
        }
    }
    return (0);
}