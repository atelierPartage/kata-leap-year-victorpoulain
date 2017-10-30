/*
** EPITECH PROJECT, 2017
** GitHub_COLLET_2017
** File description:
**	__DESCRIPTION__
*/

int is_leap_year(int year)
{
        if ((year % 4) == 0 || ((year % 100) != 0 && (year % 400) == 0))
                return (1);
        return (0);
}
