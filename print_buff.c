#include "main.h"

/**
 * print_buf - prints buffer
 * @buff: pointer to buffer
 * @n_bytes: number of bytes printed
 *
 * Return: n_bytes
 */

int print_buf(char *buff, unsigned int n_bytes)
{
	return (write(1, buff, n_bytes));
}
