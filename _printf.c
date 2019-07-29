#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - prints all values
 *
 * @format: value from main
 *
 * Return: Always 0 (Success)
 */

int _printf(char *format, ...)
{
	va_list arguments;
	unsigned int count = 0;
	int i;
	int (*fptr)(va_list arguments);

	va_start(arguments, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	else
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] == '%')
			{	_putchar('%');
				i+=2;
				count++;
			}

			if (format[i] == '%')
			{
				i++;
				fptr = get_percent(format[i]);
				if (fptr == NULL)
					return (0);
				count += fptr(arguments);
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
	va_end(arguments);
	return (count);
}
