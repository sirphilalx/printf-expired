#include "main.h"

/**
 * print_string - Print a string.
 * @args: A va_list containing the string to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args, char *buffer, int len)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	for (int i = 0; str[i] != '\0'; i++)
	{
		buffer[len++] = str[i];
		if (len == 1024)
		{
			write(1, buffer, len);
			len = 0;
		}
		count++;
	}

	return (count);
}
