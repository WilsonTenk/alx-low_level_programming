#include "search_algos.h"

/**
  * binary_search - Searches value in sorted array
  *                 of integers binary search
  * @array: Pointer to 1st element of the array to search.
  * @size: The numb of elements in the array
  * @value: The value to be search
  *
  * Return: If de value is not present or array is NULL, -1.
  *         Otherwise, the index where the value is located
  *
  * Description: Prints the [sub]array that is searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
