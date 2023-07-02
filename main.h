#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER 1024

/**
 * struct format_t - Struct format
 *
 * @specifier: The format specifier
 * @print_func: The corresponding print function
 */

typedef struct format_t
{
	char specifier;
	int (*print_func)(va_list, char *buffer, int *pos);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list args, char *buffer, int *pos);
int print_string(va_list args, char *buffer, int *pos);
int print_percent(va_list args, char *buffer, int *pos);
int print_num(va_list args, char *buffer, int *pos);
int _puts(char *str, char *buffer, int *pos);
int print_binary(va_list args, char *buffer, int *pos);
int print_unsigned_num(va_list args, char *buffer, int *pos);
int print_octal(va_list args, char *buffer, int *pos);
int print_hex_lower(va_list args, char *buffer, int *pos);
int print_hex_upper(va_list args, char *buffer, int *pos);

#endif /* MAIN_H */
