#include "main.h"

/**
 * print_int - prints an integer
 * @args: input argument
 * @buffer: pointer to buffer
 * @ibuf: index of the buffer
 *
 * Return: number of char printed
 */

int print_int(va_list args, char *buffer, unsigned int ibuf)
{
	int input;
	unsigned int num, temp, i, exponent, _ve;

	input =  va_arg(args, int);
	_ve = 0;

	if (input < 0)
	{
		num = input * -1;
		ibuf = handl_buf(buff, '-', ibuf);
		_ve = 1;
	}
	else
	{
		num = input;
	}

	temp = num;
	exponent = 1;

	while (temp > 9)
	{
		exponent *= 10;
		temp /= 10;
	}
	for (i = 0; exponent > 0; exponent /= 10, i++)
	{
		ibuf = handl_buf(buf, ((num / exponent) + '0', ibuf);
	}
	return (i + _ve);
}
