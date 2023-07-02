#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings).
 *
 */

int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;
    char buffer[BUFFER_SIZE] = {0};
    int i, j;
    print_handler_t handlers[] = {
        {'c', print_char},
        {'s', print_string},
        {'d', print_integer},
        {'i', print_integer},
        {'u', print_unsigned},
        {'o', print_octal},
        {'x', print_hex_lower},
        {'X', print_hex_upper},
        {'b', print_binary},
        {'S', print_string_custom},
        {'\0', NULL}};

    va_start(args, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '%')
            {
                buffer[len] = '%';
                len++;
            }
            else
            {
                int found = 0;
                for (j = 0; handlers[j].specifier != 0; j++)
                {
                    if (format[i] == handlers[j].specifier)
                    {
                        len += handlers[j].func(args, buffer, len);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    buffer[len] = '%';
                    len++;
                    buffer[len] = format[i];
                    len++;
                }
            }
        }
        else
        {
            buffer[len] = format[i];
            len++;
        }
    }

    va_end(args);

    for (i = 0; buffer[i]; i++)
    {
        _putchar(buffer[i]);
    }

    return len;
}
