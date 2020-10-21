/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** rush3
*/

#include "include/my.h"

int count_height(char *str)
{
    int h = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            h++;
        i++;
    }
    return h;
}

int count_widht(char *str)
{
    int i = 0;

    while (str[i] != '\n' && str[i] != '\0')
        i++;
    return i;
}

int check_rush(char *str, int w, int h)
{
    if ((w == 1 || h == 1) && error_rush345(str) == 0) {
        my_print("[rush1-3] ", h, w, 1);
        my_print(" || [rush1-4] ", h, w, 1);
        my_print(" || [rush1-5] ", h, w, 0);
        return 0;
    }
    if (str[w - 1] == 'A' && error_rush345(str) == 0) {
        my_print("[rush1-3] ", h, w, 0);
        return 0;
    }
    if (str[(h - 1) * (w + 1)] == 'A' && error_rush345(str) == 0) {
        my_print("[rush1-4] ", h, w, 0);
        return 0;
    }
    if (str[h * (w + 1) - 2] == 'A' && error_rush345(str) == 0) {
        my_print("[rush1-5] ", h, w, 0);
        return 0;
    }
    my_puterror("none\n");
    return (-1);
}

int rush3(char *str)
{
    int h = count_height(str);
    int w = count_widht(str);

    if (h <= 0 || w <= 0) {
        my_puterror("none\n");
        return (-1);
    }
    if (str[0] == 'o' && error_rush1(str) == 0) {
        my_print("[rush1-1] ", h, w, 0);
        return (0);
    }
    if ((str[0] == '*' || str[0] == '/') && error_rush2(str) == 0) {
        my_print("[rush1-2] ", h, w, 0);
        return 0;
    }
    if (check_rush(str, w, h) == -1)
        return -1;
    return 0;
}