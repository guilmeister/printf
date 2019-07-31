#include "holberton.h"
#include <stdio.h>

/**
 * print_reverse - prints string in reverse
 *
 * @s: value from main
 *
 * Return: counter
 */

int print_reverse(char *s)
{
	int x;
	int counter = 0;

	if (s == NULL)
		s = "(null)";

	while (s[counter] != '\0')
		counter++;

	for (x = counter - 1; x >= 0; x--)
		_putchar(s[x]);

	return (counter);
}

/**
 * get_reverse - print reverse string
 *
 * @arguments: value from printf
 *
 * Return: reverse string count
 */

int get_reverse(va_list arguments)
{
	int revcount = 0;
	char *printreverse = va_arg(arguments, char *);

	revcount = print_reverse(printreverse);

	return (revcount);
}
