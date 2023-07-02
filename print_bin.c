#include "main.h"

/**
 * print_binary - Print an unsigned integer in binary format.
 * @args: A va_list containing the unsigned integer to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args, char *buffer, int len)
{
	unsigned int num = va_arg(args, unsigned int);
	char *digits;
	int temp = num;
	int count = 0;

	if (num == 0)
	{
		buffer[len++] = '0';
		return (1);
	}

	while (temp != 0)
	{
		temp /= 2;
		count++;
	}

	digits = malloc(count * sizeof(char));

	while (num != 0)
	{
		digits[--count] = (num % 2) + '0';
		num /= 2;
	}

	for (int i = 0; i < count; i++)
	{
		buffer[len++] = digits[i];
		if (len == 1024)
		{
			write(1, buffer, len);
			len = 0;
		}
	}

	free(digits);
	return (count);
}
