#include "main.h"

/**
 * clear_bit - put de value of a given bit to 0
 * @no: pointer to de numb to change
 * @index: index of the bit to remove
 *
 * Return: success as 1, -1 for fail
 */
int clear_bit(unsigned long int *no, unsigned int index)
{
	if (index > 63)
		return (-1);

	*no = (~(1UL << index) & *no);
	return (1);
}
