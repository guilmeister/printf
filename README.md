_Printf
 In 1966 Vietnam war protests were raging, Batman & Star Trek aired for the first time, The Beatles “Revolver” was the top album and the foundations of Printf were laid down in the form of BCPL's writef function.  Printf was later the first C syntax to be copied into the Unix printf shell command, where it first appeared in Version 4, as part of the porting to C.

Our _Printf is a limited version of the ANSI Printf.  The primary difference between our _Printf and the ANSI Printf is that our version utilizes the Write() command which makes direct system calls to the Kernel.  ANSI Printf by comparison, creates an internal buffer for constructing output string. In addition, _Printf is a  library function defined under the holberton.h header file while Printf is defined under the stdio.h header file. Both _Printf and Printf returns an integer to the caller function which is equal to the number of characters it has printed in the console.

Similar to the puts() command, Any text written within the pair of quotes ("") is displayed as such by printf() function on the screen. However, this function is much more powerful than puts() in the sense that it can display all types of data on the screen by using different format specifiers within a pair of quotes. These format specifiers are triggered by the use of the ‘%’ character which precedes the format specifier. The format-string is read left to right. When the first format specification is found, the value of the first argument after the format-string is converted and printed according to the format specification.


FORMAT/CONVERSION SPECIFIERS:
c - Character
s - String
i - Integer
d - Decimal
r - Reverse
R - Rot13

USAGE:
printf("enter text here.");
	      Displays To Standard Out: $enter text here.
	      Returns: 16

printf("%s",string);
	Displays To Standard Out: $string
	Returns: 6

printf(“%d”,123);
	Displays To Standard Out: $123
	Returns: 3

INCLUDED FUNCTIONS:
_printf.c - Primary file
get_percent.c - Function for searching for Format Specifiers and calling related executing function
holberton.h - Static library file
get_character.c - Takes in a va_list argument, prints a single character and returns (1) 
get_decimal.c - Takes in a va_list argument, prints a number and returns the number of digits in the number 
get_integer.c - Same as get_decimal.c
get_string.c - Takes in a string pointer, prints the string and returns the number of characters printed.
get_reverse.c - Takes in a string pointer, prints a reverse of the string and returns the number of characters printed.
get_rot13 - Takes in a va_list argument, prints the input using Rot13 encoding and returns the number of characters printed.
_putchar.c - A function that uses the Write() command to display a single character into standard out.