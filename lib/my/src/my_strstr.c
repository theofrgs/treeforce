/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int x = 0;
    int j = 0;

    while (to_find[x] != '\0') {
        x++;
    }
    while (str[i] != '\0') {
        while (str[i] == to_find[j] && to_find[j] != '\0') {
            i++;
            j++;
        }
        if (j == x) {
            return (str + (i - j));
        }
        j = 0;
        i++;
    }
    return (0);
}
