#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal format
 * @args: va_list containing the unsigned integer
 *
 * Return: the number counted
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int len = 0;
	char buffer[12];

	if (num == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		int i = 0;

		while (num > 0)
		{
			buffer[i++] = (num % 8) + '0';
			num /= 8;
		}

		while (i > 0)
		{
			len += write(1, &buffer[--i], 1);
		}
	}

	return len;
}
