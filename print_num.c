#include "main.h"

/**
 * print_decimal - Print a decimal integer.
 * @args: A va_list containing the integer to print.
 * @buffer: The output buffer to store the formatted string.
 * @len: The current length of the output buffer.
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list args, char *buffer, int len)
{
	int n = va_arg(args, int);
	int negative = 0;
	int i, j, temp;

	if (n == 0)
	{
		buffer[len] = '0';
		return (1);
	}
	else if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	/* Convert the integer to its string representation in reverse */
	i = 0;
	while (n > 0)
	{
		temp = n % 10;
		buffer[len + i] = temp + '0';
		n /= 10;
		i++;
	}

	/* Add the negative sign if necessary */
	if (negative)
	{
		buffer[len + i] = '-';
		i++;
	}

	/* Reverse the string representation of the integer */
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[len + j];
		buffer[len + j] = buffer[len + i - j - 1];
		buffer[len + i - j - 1] = temp;
	}

	return (i);
}
