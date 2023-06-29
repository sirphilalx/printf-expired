#include "main.h"
#include "unistd.h"

/**
 * print_char - Prints a char
 * @args: The va_list that contains the char argument
 *
 * Return: number of char printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
