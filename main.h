#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_t - Struct format
 *
 * @specifier: The format specifier
 * @print_func: The corresponding print function
 */

typedef struct format_t
{
	char specifier;
	int (*print_func)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_num(va_list args);
int _puts(char *str);

#endif /* MAIN_H */
