#include "main.h"

/**
 * get_bit - print de value of a bit at index in decimal numb
 * @no: number to look for
 * @index: index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int no, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (no >> index) & 1;

	return (bit_val);
}
