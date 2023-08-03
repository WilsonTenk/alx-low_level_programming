#include "main.h"

/**
 * get_endianness - search if a machine is lil or big endian
 * Return: big for 0, 1 for lil
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
