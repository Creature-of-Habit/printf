#include <limits.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	printf("Character:[%c]\n", 'H');
       	_printf("String:[%s]\n", "I am a string !");
       	printf("String:[%s]\n", "I am a string !");
       	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	return (0);
}
