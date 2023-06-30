#include "main.h"

/**
 * _printf - the function that mimics the standard printf
 * @format: the constant variable
 * @...: the variadic elipsis
 *
 * Return: returns the integar value
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int pos = 0;
	char buffer[BUFFER_SIZE] = {0};

	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_num},
		{'i', print_num},
		{'b', print_binary},
		{'u', print_unsigned_num},
		{'o', print_octal},
		{'x', print_hex_lower},
		{'X', print_hex_upper},
		{'\0', '\0'}
	};

	va_start(args, format);

	while (format && format[pos])
	{
		if (format[pos] == '%')
		{
			int j = 0;
			specifierFound = 0;

			pos++;

			while (formats[j].specifier)
			{
				if (format[pos] == *(handlers[j].specifier))
				{
					len += formats[j].print_func(args, buffer, &pos);
					found = 1;
					break;
				}
				j++;
			}
			if (!found && format[pos])
			{
				len += write(1, &format[pos - 1], 2);
				pos++;
			}
		}
		else
		{
			len += write(1, &format[pos], 1);
			pos++;
		}
		if (len >= BUFFER_SIZE)
		{
			len -= write(1, buffer, len);
			len = 0;
		}
	}

	len += write(1, buffer, len);
	va_end(args);

	return (len);
}
