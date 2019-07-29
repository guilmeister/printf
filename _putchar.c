#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

int _putchar(char c)
{
        return (write(1, &c, 1));
}
