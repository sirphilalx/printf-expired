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
	int i = 0;

	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_num},
		{'i', print_num},
		{0, '\0'}
	};

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			int j = 0;

			while (formats[j].specifier)
			{
				if (formats[j].specifier == format[i + 1])
				{
					len += formats[j].print_func(args);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			len += write(1, &format[i], 1);
		}
		i++;
	}

	va_end(args);

	return (len);
}
