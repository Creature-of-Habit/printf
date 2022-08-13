#include "main.h"

/**
 * handl_buf - concatenates buffers
 * @buff: buffer pointer
 * @ch: character to concat
 * @ibuf: index of the buff
 *
 * Return: ibuf
 */

unsigned int handl_buf(char *buff, char ch, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buff, ibuf);
		ibuf = 0;
	}
	buff[ibuf] = ch;
	ibuf++;

	return (ibuf);
}
