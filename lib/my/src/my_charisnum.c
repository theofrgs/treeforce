/*
** EPITECH PROJECT, 2020
** Bistro_2020
** File description:
** my_charisnum
*/

int my_char_isnum(char c)
{
    if (c < '0' || c > '9')
        return (1);
    return (0);
}