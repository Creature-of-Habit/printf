#include "main.h"

/**
 * get_func - pointer function to function for the required operation
 * @c: arg identifier
 * @index: index for arg identifier
 *
 * Return: pointer to required function
 */

int (*get_func(const char *c, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_str},
		/* {"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_usr},*/
		{"%", print_ptg}, {NULL, NULL},
	};
	int i = 0, j = 0, f_index;

	f_index = index;
	while (pr[i].type)
	{
		if (c[index] == pr[i].type[j])
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
	return (pr[i].f);
}
