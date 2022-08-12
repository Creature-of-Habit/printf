#include "main.h"
#include <stdio.h>

/**
 * print_char - prints inputed char
 * @args: inputed char
 * @buff: buffer pointer
 * @ibuf: index of buffer pointer
 *
 * Return: 1 (Sucess)
 */

int print_char(va_list args, char *buff, unsigned int ibuf)
{

	handl_buf(buff, va_arg(args, int), ibuf);

	return (1);
}
