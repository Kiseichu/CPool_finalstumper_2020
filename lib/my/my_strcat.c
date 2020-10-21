/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Day07
*/

#include "my.h"
#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i += 1);
    return i;
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int len = my_strlen(dest);
    int totlen = len + my_strlen(src);
    char *out = malloc(sizeof(char) * (totlen) + 1);

    for (int f = 0; f != len; f += 1)
        out[f] = dest[f];

    for (int g = len; g != totlen; g += 1){
        out[g] = src[i];
        i += 1;
    }
    out[totlen] = '\0';
    return (out);
    free(out);
}