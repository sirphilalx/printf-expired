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
 * @pos: a pointer to the current position in the buffer
 * @buffer: to store the character to be printed
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int len = 0;

	if (num == 0)
	{
		if (*pos == 1023)
	{
		write(1, "0", 1);
		*pos = 0;
	}
	buffer[(*pos)++] = '0';
	len++;
	}
	else
	{
	char binary_str[33];
	int idx = 0;

	while (num > 0)
	{
		if (*pos == 1023)
		{
			write(1, buffrer, *pos);
			*pos = 0;
		}
		binary_str[idx++] = (num & 1) + '0';
		num >>= 1;
	}
	binary_str[idx] = '\0';

	int start = 0;
	int end = idx - 1;

	while (start < end)
	{
		char temp = binary_str[start];

		binary_str[start] = binary_str[end];
		binary_str[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < idx; i++)
	{
		if (*pos == 1023)
		{
			write(1, buffer, *pos);
			*pos = 0;
		}
		buffer[(*pos)++] = binary_str[i];
		len++;
	}
}
	return (len);
}
