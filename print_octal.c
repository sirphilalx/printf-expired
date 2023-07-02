#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal format.
 * @args: A va_list containing the unsigned integer to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */

int print_octal(va_list args, char *buffer, int len)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j;
	char octal_digits[100];

	if (n == 0)
	{
		buffer[len] = '0';
		return (1);
	}

	/* Convert the unsigned integer to octal representation in reverse */
	while (n != 0)
	{
		octal_digits[i++] = (n % 8) + '0';
		n /= 8;
	}

	/* Reverse the octal digits to get the correct representation */
	for (j = i - 1; j >= 0; j--)
	{
		buffer[len++] = octal_digits[j];
	}

	return (i);
}
