#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - search for value in an array by linear srch
 * @array: array to search for values inside
 * @size: size of array
 * @value: value searching
 *
 * Return: index of found value or -1 not found
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
