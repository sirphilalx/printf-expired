#include "main.h"

/**
 * print_percent - Print the '%' character.
 * @args: A va_list (unused).
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */
int print_percent(__attribute__((unused)) va_list args, char *buffer, int len)
{
	buffer[len++] = '%';

	if (len == 1024)
	{
		write(1, buffer, len);
		len = 0;
	}
	return (1);
}
