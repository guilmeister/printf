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
	{
		_putchar('0');
		return (1);
	}

	else
		number2 = number;

	if (number2 / 10 != 0)
		print_decimal(number2 / 10);

	_putchar(number2 % 10 + '0');

	return (number);
}

/**
 * get_decimal - gets the value for decimal
 *
 * @arguments: value from printf
 *
 * Return: dec_length
 */

int get_decimal(va_list arguments)
{
	int decimal;
	int dec_length;
	int get_number;

	decimal = va_arg(arguments, int);

	get_number = print_decimal(decimal);

	dec_length = int_count(get_number);

	return (dec_length);
}

/**
 * int_count - gets the length of an int/decimal
 *
 * @n: Int/decimal to count
 *
 * Return: Always 0 (Success)
 */

int int_count(int n)
{
	int count = 0;

	if (n < 0)
		count++;

	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}
