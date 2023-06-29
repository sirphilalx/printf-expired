#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_percent - Prints a percent character
 * @args: The va_list (unused)
 *
 * Return: The number of characters printed (always 1)
 */

int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
