#include "main.h"

/**
 * print_unsigned_num - prints an unsigned integer in decimal format
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */

int print_unsigned_num(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int len = 0;
	char buffer[11];

	if (num == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		int i = 0;

		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num /= 10;
		}

		while (i > 0)
		{
			len += write(1, &buffer[--i], 1);
		}
	}

	return (len);
}
