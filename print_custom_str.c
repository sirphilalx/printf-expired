#include "main.h"

/**
 * print_string_custom - Print a string (non-printable characters are replaced with \xHH).
 * @args: A va_list containing the string to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */
int print_string_custom(va_list args, char *buffer, int len)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			buffer[len++] = '\\';
			buffer[len++] = 'x';
			buffer[len++] = (str[i] / 16) + '0';
			buffer[len++] = (str[i] % 16) + ((str[i] % 16 < 10) ? '0' : 'A' - 10);
		}
		else
		{
			buffer[len++] = str[i];
		}

		if (len == 1024)
		{
			write(1, buffer, len);
			len = 0;
		}

		count++;
	}

	buffer[len++] = '\n';
	return (count);
}
