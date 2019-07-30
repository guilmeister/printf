#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_integer - print the integer ranging from INT_MIN - INT_MAX
 *
 * @number: value passed from function get_integer
 *
 * Return: number2
 */

int print_integer(int number)
{
	unsigned int number2;

	if (number < 0)
	{
		_putchar('-');
		number2 = -number;
	}

	else if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	else
		number2 = number;

	if (number2 / 10 != 0)
		print_integer(number2 / 10);

	_putchar(number2 % 10 + '0');

	return (number);
}

/**
 * get_integer - gets the value for integer
 *
 * @arguments: value from get_percent
 *
 * Return: Always 0 (Success)
 */

int get_integer(va_list arguments)
{
	int integer;

	integer = va_arg(arguments, int);

	return (print_integer(integer));
}
