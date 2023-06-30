#include "main.h"

/**
 * print_binary_recursive - Helper function for recursive binary conversion
 * @num: The number to convert to binary
 * @len: Pointer to the length counter
 */
void print_binary_recursive(unsigned int num, int *len)
{
    if (num == 0)
    {
        return;
    }

    print_binary_recursive(num >> 1, len);
    (*len) += write(1, ((num & 1) == 0) ? "0" : "1", 1);
}

/**
 * print_binary - Converts an unsigned int to binary and prints it
 * @args: va_list containing the unsigned int to convert
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int len = 0;

    if (num == 0)
    {
        len += write(1, "0", 1);
    }
    else
    {
        print_binary_recursive(num, &len);
    }

    return len;
}
