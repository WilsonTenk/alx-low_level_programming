#include "main.h"

/**
 * binary_to_uint - translates a binary numb to unsigned int
 * @bnumb: string that contains de binary numb
 *
 * Return: the translated numb
 */
unsigned int binary_to_uint(const char *bnumb)
{
	int i;
	unsigned int dec_val = 0;

	if (!bnumb)
		return (0);

	for (i = 0; bnumb[i]; i++)
	{
		if (bnumb[i] < '0' || bnumb[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (bnumb[i] - '0');
	}

	return (dec_val);
}
