#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdarg.h>

/**
 * struct operation - structure for printf
 *
 * @operate: operator
 *
 * @f: function associated
 *
 */

typedef struct operation
{
	char operate;
	int (*f)(va_list arguments);
} ops;

int (*get_percent(const char s))(va_list);
int _strcmp(char *str1, char *str2);
int _putchar(char c);
int get_character(va_list);
int get_string(va_list);
int get_decimal(va_list);
int get_integer(va_list);
int _printf(char *format, ...);
int int_count(int n);
int get_percentchar(va_list);

#endif
