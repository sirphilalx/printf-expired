#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - Prints a string
 * @args: The va_list that contains the string argument
 * @buffer: The buffer to store the characters to be printed
 * @pos: A pointer to the current position in the buffer
 *
 * Return: The number of characters printed
 */

int print_string(va_list args char *buffer, int *pos)
{
	char *str = va_arg(args, char *);
	int len = 0;

	while (*str)
	{
		if (*pos == 1023)
		{
			write(1, buffer, *pos);
			*pos = 0;
		}
		buffer[(*pos)++] = *str++;
		len++;
	}

	return (len);
}
