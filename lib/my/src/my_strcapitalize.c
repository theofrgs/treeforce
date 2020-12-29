/*
** EPITECH PROJECT, 2019
** my_strcapitalize.C
** File description:
** capitalize
*/

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' && str[i] > 122) || (str[i] > 57) || (str[i] < 48\
            && str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;
    }
    return (str);
}