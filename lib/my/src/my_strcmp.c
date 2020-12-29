/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** strcmp
*/

int compare_n(char *str1, char *str2, int n)
{
    for (int i = 0; (str1[i] != '\0' && i != n) || \
    (str2[i] != '\0' && i < n); i++) {
        if (str1[i] != str2[i])
            return (84);
    }
    return (0);
}

int compare(char *str1, char *str2)
{
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (84);
    }
    return (0);
}

int my_strcmp(char *s1, char *s2, int n)
{
    if (n == 0)
        return (compare(s1, s2));
    return (compare_n(s1, s2, n));
}
