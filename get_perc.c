#include "holberton.h"
#include <stdio.h>

/**
 * get_perc - print percent
 *
 * @arguments: value from printf
 *
 * Return: value of outer
 */

int get_perc(va_list arguments)
{
	(void)arguments;
	_putchar('%');
	return (1);
}
