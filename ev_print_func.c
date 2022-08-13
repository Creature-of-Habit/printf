#include "main.h"

/**
 * ev_print_func - handles number of identifiers
 * @s: args identifier
 * @index: index of identifier
 *
 * Return: number of identifiers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_binr},/* {"u", print_untr},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx},*/{"%", print_ptg},
		{NULL, NULL},
	};
	int i = 0, j = 0, f_index;

	f_index = index;
	while (pr[i].type)
	{
		if (s[index] == pr[i].type[j])
		{
			if (pr[i].type[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = f_index;
		}
	}
	return (j);
}
