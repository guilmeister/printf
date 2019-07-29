#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_percent - checks for flags for format specifiers
 *
 * @s: character compared if it is one of the format specifiers
 *
 * Return: function if there is a match / NULL if no match
 */

int (*get_percent(const char s))(va_list)
{
        ops percent[] = {
		{'c', get_character},
		{'s', get_string},
		{'d', get_decimal},
		{'i', get_integer},
		{'\0', NULL}
        };

        int i = 0;

        while (percent[i].operate)
        {
                if (percent[i].operate == s)
                        return (percent[i].f);

                i++;
        }
        return (NULL);
}
