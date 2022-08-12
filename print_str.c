#include "main.h"

/**
 * print_str - prints string to stdout
 * @args: inputed string
 * @buff: pointer to buffer
 * @ibuf: index of buffer pointer
 *
 * Return: 1 (Sucess)
 */

int print_str(va_list args, char *buff, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nil[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nil[i]; i++)
			ibuf = handl_buf(buff, nil[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buff, str[i], ibuf);
	return (i);
}
