/*
** EPITECH PROJECT, 2017
** kata-leap-year-victorpoulain-master
** File description:
**	__DESCRIPTION__
*/

#include <criterion/criterion.h>

Test (basic, one_year)
{
        cr_assert(is_leap_year(0));
}

Test (basic, one_not_leap_year)
{
        cr_assert(!is_leap_year(1));
}

Test (basic, year_100)
{
        cr_assert(is_leap_year(100));
}

Test (basic, year_4)
{
        cr_assert(is_leap_year(4));
}

Test (basic, year_4_neg)
{
        cr_assert(is_leap_year(-4));
}
