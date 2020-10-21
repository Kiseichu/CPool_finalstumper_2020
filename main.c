/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** main
*/

#include "include/my.h"

/*int main(void)
{
    char buff[30000 + 1];
    int offset = 0;
    int len = 0;

    while ((len = read(0, buff + offset, 30000 - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}*/

int main(void)
{
    rush3("ABBA\nBXXB\nBXXB\nCBBC\n");
    return 0;
}