#include "main.h"
#include "unistd.h"

/**
 * print_char - Prints a char
 * @args: The va_list that contains the char argument
 * @pos: A pointer to the current position in the buffer
 * @buffer: The buffer to store the characters to be printed
 *
 * Return: number of char printed
 */

int print_char(va_list args, char *buffer, int *pos)
{
	char c = va_arg(args, int);
	if (*pos == 1023)
	{
		write(1, buffer, *pos);
		*pos = 0;
	}

	buffer[(*pos)++] = c;

	return (1);
}
