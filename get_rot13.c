#include "holberton.h"
#include <stdio.h>

/**
 * get_rot13 - rotate 13 characters
 *
 * @arguments: value from printf
 *
 * Return: value of outer
 */

int get_rot13(va_list arguments)
{
	char *printrot13 = va_arg(arguments, char *);
	int outer;
	int inner;
	char rotation[55] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[55] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	if (printrot13 == NULL)
		printrot13 = "(null)";

	for (outer = 0; printrot13[outer] != '\0'; outer++)
	{
		for (inner = 0; alphabet[inner] != '\0'; inner++)
		{
			if (printrot13[outer] == alphabet[inner])
			{
				_putchar(rotation[inner]);
				break;
			}
		}
		if (alphabet[inner] == '\0')
			_putchar(printrot13[outer]);
	}
	return (outer);
}
