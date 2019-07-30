#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_percentchar - get a single character and print
 *
 * Return: 1 for character count
 */

int get_percentchar(va_list arguments)
{
	(void)arguments;
	_putchar('%');
	return (1);
}
