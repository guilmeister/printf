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
	int i;
	int (*fptr)(va_list arguments);

	va_start(arguments, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == ' ')
		{
			if (format[i + 2] == '\0')
				return (-1);
			i = i + 2;
			count++;
		}
		if (format[i] == '%')
		{	i++;
			fptr = get_percent(format[i]);
			if (fptr == NULL)
			{_putchar('%');
				_putchar(format[i]);
				count++;
				continue;
			}
			count = count + fptr(arguments) - 1;
		}
		else
		{	_putchar(format[i]);
			count++;
		}
	}
	va_end(arguments);
	return (count);
}
