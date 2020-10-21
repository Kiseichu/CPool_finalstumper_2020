/*
** EPITECH PROJECT, 2020
** CPool_finalstumper_2020
** File description:
** tests_rush3
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(rush3, test_one, .init = redirect_stdout)
{
    rush3("o--o\n|  |\n|  |\no--o\n");
    cr_assert_stdout_eq_str("[rush1-1] 4 4\n");
}

Test(rush3, test_two_one, .init = redirect_stdout)
{
    char str[21] = {'/', '*', '*', 92, '\n', '*', ' ', ' ', '*',
                    '\n', '*', ' ', ' ', '*', '\n', 92, '*', '*',
                    '/', '\n', '\0'};

    rush3(str);
    cr_assert_stdout_eq_str("[rush1-2] 4 4\n");
}

Test(rush3, test_two_two, .init = cr_redirect_stderr)
{
    char str[21] = {'/', '*', '*', 92, '\n', '*', 'X', 'X', '*',
                    '\n', '*', 'X', 'X', '*', '\n', 92, '*', '*',
                    '/', '\n', '\0'};

    rush3(str);
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_two_three, .init = redirect_stdout)
{
    rush3("*****\n");
    cr_assert_stdout_eq_str("[rush1-2] 5 1\n");
}

Test(rush3, test_three_one, .init = redirect_stdout)
{
    rush3("BBBBBBB\n");
    cr_assert_stdout_eq_str(
        "[rush1-3] 7 1 || [rush1-4] 7 1 || [rush1-5] 7 1\n");
}

Test(rush3, test_three_two, .init = redirect_stdout)
{
    rush3("B\nB\nB\nB\nB\nB\nB\n");
    cr_assert_stdout_eq_str(
        "[rush1-3] 1 7 || [rush1-4] 1 7 || [rush1-5] 1 7\n");
}

Test(rush3, test_three_three, .init = redirect_stdout)
{
    rush3("B\n");
    cr_assert_stdout_eq_str("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
}

Test(rush3, test_three_four, .init = cr_redirect_stderr)
{
    rush3("a\n");
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_four_one, .init = redirect_stdout)
{
    rush3("ABBA\nB  B\nB  B\nCBBC\n");
    cr_assert_stdout_eq_str("[rush1-3] 4 4\n");
}

Test(rush3, test_four_two, .init = cr_redirect_stderr)
{
    rush3("ABBA\nBXXB\nBXXB\nCBBC\n");
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_five_one, .init = redirect_stdout)
{
    rush3("ABBC\nB  B\nB  B\nABBC\n");
    cr_assert_stdout_eq_str("[rush1-4] 4 4\n");
}

Test(rush3, test_six, .init = redirect_stdout)
{
    rush3("ABBC\nB  B\nB  B\nCBBA\n");
    cr_assert_stdout_eq_str("[rush1-5] 4 4\n");
}

Test(rush3, test_seven_one, .init = cr_redirect_stderr)
{
    rush3("oooooo");
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_seven_two, .init = cr_redirect_stderr)
{
    rush3("\n\n\n");
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_eight, .init = cr_redirect_stderr)
{
    rush3("ABBC\nBUUB\nBUUB\nCBBA\n");
    cr_assert_stderr_eq_str("none\n");
}

Test(rush3, test_ten, .init = cr_redirect_stderr)
{
    rush3("oAZR\n");
    cr_assert_stderr_eq_str("none\n");
}