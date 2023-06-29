#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - Prints a string
 * @args: The va_list that contains the string argument
 *
 * Return: The number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str)
	{
		while (str[len])
			len += write(1, &str[len], 1);
	}

	return (len);
}
