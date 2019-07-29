#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_decimal - print the decimal ranging from INT_MIN - INT_MAX
 *
 * @number: value passed from function get_decimal
 *
 * Return: number2
 */

int print_decimal(int number)
{
	unsigned int number2;

	if (number < 0)
	{
		_putchar('-');
		number2 = -number;
	}

	else if (number == 0)
		return (0);

	else
		number2 = number;

	if (number2 / 10 != 0)
		print_decimal(number2 / 10);

	_putchar(number2 % 10 + '0');

	return (number);
}

/**
 * get_decimal - gets the value for decimal (base10)
 *
 * @arguments: value from get_percent
 *
 * Return: Always 0 (Success)
 */

int get_decimal(va_list arguments)
{
	int decimal;

	decimal = va_arg(arguments, int);

	return(print_decimal(decimal));
}
