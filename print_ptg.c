#include "main.h"
#include <stdio.h>

/**
 * print_ptg - prints % to stdout
 * @a: input char
 * @buff: pointer to buffer
 * @i: index of buffer pointer
 *
 * Return: 1 on sucess
 */

int print_ptg(va_list a __attribute__((unused)), char *buff, unsigned int i)
{
	handl_buf(buff, '%', i);

	return (1);
}
