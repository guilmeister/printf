#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_string - print the string given
 *
 * @arguments: value from _printf
 *
 * Return: count
 */

int get_string(va_list arguments)
{
	int count;
	char *printstring;

	printstring = va_arg(arguments, char *);

	if (printstring == NULL)
		return (-1);

	for (count = 0; *printstring != '\0'; count++, printstring++)
		_putchar(*printstring);

	return (count);
}
