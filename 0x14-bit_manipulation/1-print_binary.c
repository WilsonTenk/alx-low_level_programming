#include "main.h"

/**
 * print_binary - output de binary equivalent of decimal numb
 * @no: numb to print in binary
 */
void print_binary(unsigned long int no)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = no >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
