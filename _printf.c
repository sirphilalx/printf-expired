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
        {'\0', '\0'}};

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
