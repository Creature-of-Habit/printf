#include "main.h"

/**
 * print_binr - prints binary coversion of decimal
 * @args: input argument
 * @buffer: pointer to buffer
 * @ibuf: buffer index
 *
 * Return: number of characters printed
 */

int print_binr(va_list args, char *buffer, unsigned int ibuf)
{
	int num, counter, i, first, _ve;
	char *binary;

	num = va_arg(args, int);
	_ve = 0;

	if (num == 0)
	{
		ibuf = handl_buf(buffer, '0', ibuf);
		return (1);
	}
	if (num < 0)
	{
		num = (num * 1) - 1;
		_ve = 1;
	}
	binary = malloc(sizeof(char) * 33);
	binary = fill_bin_arr(binary, num, _ve, 32);
	first = 0;

	for (counter = i = 0; binary[i]; i++)
	{
		if (first == 0 && binary[i] == '1')
			first = 1;
		if (first == 1)
		{
			ibuf = handl_buf(buffer, binary[i], ibuf);
			counter++;
		}
	}
	free(binary);
	return (counter);

}
