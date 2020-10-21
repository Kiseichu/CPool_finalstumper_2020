/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** error
*/

int error_rush1(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != 'o' && str[i] != '-' && str[i] != '\n' && str[i] != ' '
        && str[i] != '|')
            return (-1);
        i++;
    }
    return 0;
}

int error_rush2(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] != '/' && str[i] != '\\' && str[i] != '*' && str[i] != '\n' && str[i] != ' ')
            return (-1);
    }
    return 0;
}

int error_rush345(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != 'A' && str[i] != 'B' && str[i] != 'C' && str[i] != '\n' && str[i] != ' ')
            return (-1);
        i++;
    }
    return 0;
}