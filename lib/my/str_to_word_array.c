/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** str_to_word_array
*/

#include "my.h"
#include <stdlib.h>

int strlines(char *str, char sep)
{
    int a = 1;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == sep)
            a += 1;
        i += 1;
    }
    return (a);
}

int my_strchar(char *str, char sep)
{
    int i = 0;

    while (str[i] && str[i] != sep){
        i += 1;
    }
    return (i);
}

char **str_to_word_array(char *str, char sep)
{
    char **tab;
    int lines = strlines(str, sep);
    tab = malloc(sizeof(char *)* lines + 1);
    int charnbr;
    int i = 0;

    for ( int j = 0; str[j] != '\0'; i += 1) {
        charnbr = my_strchar(str, sep);
        tab[i] = malloc(sizeof(char) * (charnbr +1));
        for (;str[j] != sep && str[j] != '\0';j += 1){
            tab[i][j] = str[j];
        }
        tab[i][j] = '\0';
        j = 0;
        str += charnbr + 1;
    }
    tab [i - 1] = NULL;
    return tab;

}