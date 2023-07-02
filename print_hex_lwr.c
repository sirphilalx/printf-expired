#include "main.h"

/**
 * print_hex_lower - prints an unsigned integer in lowercase hexadecimal format
 * @args: va_list containing the unsigned int
 *
 * Return: int
 */

int print_hex_lower(va_list args char *buffer, int *pos)
{
	unsigned int num = va_arg(args, unsigned int);
	int len = 0;
	char buffer[9];

	if (num == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		int i = 0;

		while (num > 0)
		{
			int remainder = num % 16;

			buffer[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'a');
			num /= 16;
		}

		while (i > 0)
		{
			len += write(1, &buffer[--i], 1);
		}
	}

	return (len);
}
