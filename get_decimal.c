#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int print_decimal(int number)
{
	if(number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number == 0)
		return (0);

	if (number / 10 != 0)
		print_decimal(number / 10);

	_putchar(number % 10 + '0');

	return (number);
}


int get_decimal(va_list arguments)
{
	int decimal;

	decimal = va_arg(arguments, int);

	print_decimal(decimal);

	return (0);
}
