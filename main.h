#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print_handler - Struct to hold format specifier and corresponding function pointer.
 * @specifier: The format specifier character.
 * @func: The corresponding function pointer to handle the specifier.
 */
typedef struct print_handler
{
    char specifier;
    int (*func)(va_list args, char *buffer, int len);
} print_handler_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args, char *buffer, int len);
int print_string(va_list args, char *buffer, int len);
int print_integer(va_list args, char *buffer, int len);
int print_unsigned(va_list args, char *buffer, int len);
int print_octal(va_list args, char *buffer, int len);
int print_hex_lower(va_list args, char *buffer, int len);
int print_hex_upper(va_list args, char *buffer, int len);
int print_binary(va_list args, char *buffer, int len);
int print_string_custom(va_list args, char *buffer, int len);

#endif /* MAIN_H */
