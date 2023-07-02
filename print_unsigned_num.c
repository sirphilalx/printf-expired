#include "main.h"

/**
 * print_unsigned - Print an unsigned integer to the buffer
 * @args: The va_list containing the unsigned integer to print
 * @buffer: The buffer to print to
 * @len: The current length of the buffer
 *
 * Return: The length of the printed unsigned integer
 */
int print_unsigned(va_list args, char *buffer, int len)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, temp;

	if (n == 0)
	{
		buffer[len] = '0';
		return (1);
	}

	/* Convert the unsigned integer to its string representation in reverse */
	i = 0;
	while (n > 0)
	{
		temp = n % 10;
		buffer[len + i] = temp + '0';
		n /= 10;
		i++;
	}

	/* Reverse the string representation of the unsigned integer */
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[len + j];
		buffer[len + j] = buffer[len + i - j - 1];
		buffer[len + i - j - 1] = temp;
	}

	return (i);
}
