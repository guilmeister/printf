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
	int count = 0;
	int i = 0;
	int (*fptr)(va_list arguments);

	va_start(arguments, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == ' ')
			return (-1);
		if (format[i] == '%')
		{	i++;
			fptr = get_percent(format[i]);
			if (fptr == NULL)
			{	count += _putchar('%');
				count += _putchar(format[i]);
			}
			count = count + fptr(arguments);
		}
		else
		{	_putchar(format[i]);
			count++;
		}

	}
	va_end(arguments);
	return (count);
}
