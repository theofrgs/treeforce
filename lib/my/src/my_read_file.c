/*
** EPITECH PROJECT, 2020
** write_includes
** File description:
** my_read_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

char *my_read_file(char *file_path)
{
    char *buff = NULL;
    int fd = open(file_path, O_RDONLY);
    struct stat stat_f;

    if (fd == -1)
        return (NULL);
    if (stat(file_path, &stat_f) == -1)
        return (NULL);
    buff = malloc(sizeof(char) * ((stat_f.st_size) + 2));
    if ((read(fd, buff, stat_f.st_size) == -1) || (close(fd) == -1))
        return (NULL);
    buff[stat_f.st_size] = '\0';
    return (buff);
}