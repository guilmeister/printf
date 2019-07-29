#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int print_integer(int number)
{
	if(number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number == 0)
		return (0);

	if (number / 10 != 0)
		print_integer(number / 10);

	_putchar(number % 10 + '0');

	return (number);
}

int get_integer(va_list arguments)
{
	int integer;

	integer = va_arg(arguments, int);

	print_integer(integer);

        return (0);
}
