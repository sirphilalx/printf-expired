#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_num - prints integers or numbers to std output
 * @args: valis that contains the integers or numbers
 *
 * Return: the number counted
 */

int print_num(va_list args, char *buffer, int *pos)
{
	int num = va_arg(args, int);
	int len = 0;
	char *buffer;

	if (num < 0)
	{
		if (*pos == 1023)
		{
			write(1, buffer, *pos);
			*pos = 0;
		}
		buffer[(*pos)++] = '-';
		num = -num;
		len++;
	}
	if (num == 0)
	{
		if (*pos == 1023)
		{
			write(1, buffer, *pos);
			*pos = 0;
		}
		buffer[(*pos)++] = '0';
		len++;
	}
	else
	{
		int temp = num;
		int digits = 0;

		while (temp != 0)
		{
			temp /= 10;
			digits++;
		}
		buffer = malloc((digits + 1) * sizeof(char));

		if (buffer == NULL)
			return (-1);

		buffer[digits] = '\0';
		while (num != 0)
		{
			buffer[--digits] = (num % 10) + '0';
			num /= 10;
		}
		len += write(1, buffer, len);

		free(buffer);
	}

	return (len);
}
