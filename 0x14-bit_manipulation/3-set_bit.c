#include "main.h"

/**
 * set_bit - put a bit at a given index to 1
 * @no: pointer to de numb to change
 * @index: index of de bit to put to 1
 *
 * Return: success for 1, -1 for failure
 */
int set_bit(unsigned long int *no, unsigned int index)
{
	if (index > 63)
		return (-1);

	*no = ((1UL << index) | *no);
	return (1);
}
