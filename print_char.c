#include "main.h"

/**
 * print_char - Print a single character.
 * @args: A va_list containing the character to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args, char *buffer, int len)
{
	char c = va_arg(args, int);

	buffer[len] = c;
	return (1);
}
