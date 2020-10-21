/*
** EPITECH PROJECT, 2019
** psu_navy_2019
** File description:
** my.h
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef MY_H
#define MY_H

void my_putchar(char);
void my_putstr(char *);
void print_map(char *);
void display_pos1(char **);
void display_pos2(char **);
void my_print(char *str, int h, int w, int n);
int kill_pyd(int);
int print_map_point(char *, int);
int open_file(char const *);
int my_put_nbr(int);
int my_strcmp(char const *s1, char const *s2);
int my_puterror(char *str);
int error_gestion(int ac, char *av);
int error_rush1(char *str);
int error_rush2(char *str);
int error_rush345(char *str);
int rush3(char *);
char *read_file(int);
char *attack_getline(void);
char *getline_secoure(void);
char *error_getline(char *att_pos);
#endif