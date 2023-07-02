#include "main.h"

/**
 * print_pointer - Prints a pointer address in hexadecimal format
 * @args: The va_list containing the pointer to print
 * @buffer: The buffer to store the formatted string
 * @len: The current length of the buffer
 *
 * Return: The new length of the buffer after adding the formatted pointer.
 */

int print_pointer(va_list args, char *buffer, int len)
{
	unsigned long int p;
	int i, digit;

	p = (unsigned long int)va_arg(args, void *);
	buffer[len++] = '0';
	buffer[len++] = 'x';

	if (!p)
	{
	buffer[len++] = '0';
	}
	else
	{
		for (i = 0; p >> (i * 4 + 4); i++)
			;
		for (; i >= 0; i--)
		{
			digit = (p >> (i * 4)) & 0xF;
			if (digit < 10)
				buffer[len++] = '0' + digit;
			else
				buffer[len++] = 'a' + (digit - 10);
		}
	}
	return (len);
}
