/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** my_print
*/

#include "my.h"

void my_print(char *str, int h, int w, int n)
{
    my_putstr(str);
    my_put_nbr(w);
    my_putchar(' ');
    my_put_nbr(h);
    if (n == 0)
        my_putchar('\n');
}