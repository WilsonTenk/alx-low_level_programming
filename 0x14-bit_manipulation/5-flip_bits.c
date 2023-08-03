#include "main.h"

/**
 * flip_bits - must read the number of bits to change
 * to get from one numb 2 another
 * @t: first numb
 * @w: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int t, unsigned long int w)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = t ^ w;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
