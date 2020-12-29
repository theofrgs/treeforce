/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** my
*/

#include <stdarg.h>
#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char *s1, char *s2, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
unsigned int my_put_nbr_unsigned(unsigned int nb);
char *my_putnbr_base(int base, int nb, char c);
int my_printf(char *const format, ...);
int my_intlen(int *tab);
char **my_str_to_word_array(char *str);
char *my_realloc(char *str, int size);
char **my_str_n_to_word_array(char *str, char sprtr);
int arrlen(void **arr);
char *rev_strncpy(char *src, int n);
char **my_arrdup(char **arr);
char **realloc_my_arr(char **arr, int size);
char *my_strdup(char *src);
void my_put_arr(void **arr, char *type);
void free_arr(void **arr);
int my_char_isnum(char c);
char **str_array(char *str, char *word);

#endif /* !MY_H_ */
