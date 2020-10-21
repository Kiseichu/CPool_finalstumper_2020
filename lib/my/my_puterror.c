/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** my_puterror
*/

#include "my.h"
#include <unistd.h>

static void my_putchars(char c)
{
    write(2, &c, 1);
}

int my_puterror(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchars(str[i]);
    return 0;
}