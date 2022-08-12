#include "main.h"

/**
 * _printf - funnction similar to printf function
 * @format: The cagracter string to be printed composed of  directives
 *
 * Return: the number of characters printed to the stdout
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list args;
	int (*function)(va_list, char *, unsigned int);
	char *buff;


	va_start(args, format), buff = malloc(sizeof(char) * 1024);
	if (!format || !buff || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_buf(buff, ibuf), free(buff), va_end(args);
				return (-1);
			}
			else
			{	function = get_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handl_buf(buff, format[i], ibuf), len++, i--;
				}
				else
				{	len += function(args, buff, ibuf);
					i += ev_print_func(format, i + 1);
				}
			} i++;
		}
		else
			handl_buf(buff, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buf(buff, ibuf), free(buff), va_end(args);
	return (len);
}
