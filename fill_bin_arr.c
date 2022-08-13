#include "main.h"

/**
 * fill_bin_arr - prints binary conversion of decimal
 * @binary: binary pointer
 * @input: inputed number
 * @_ve: indicated negative number
 * @limit: size of the binary
 *
 * Return: number of characters printed
 */

char *fill_bin_arr(char *binary, long int input, int _ve, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';

	binary[limit] = '\0';
	for (i = limit - 1; input > 1; i--)
	{
		if (input == 2)
			binary[i] = '0';
		else
			binary[i] = (input % 2) + '0';
		input /= 2;
	}
	if (input != 0)
		binary[i] = '1';
	if (_ve)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
