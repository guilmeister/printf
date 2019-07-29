#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_character - get a single character and print
 *
 * @arguments: va_list taken from main
 *
 * Return: Always 0 (Success)
 */

int get_character(va_list arguments)
{
        _putchar(va_arg(arguments, int));
        return (0);
}
