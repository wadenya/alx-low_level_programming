#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array of integers
  *               using interpolation search.
  * @array: pointer to the first element of the array to search.
  * @size: is the number of elements in the array.
  * @value: is the value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t y, lft, rght;

	if (array == NULL)
		return (-1);

	for (y = 0, rght = size - 1; rght >= 1;)
	{
		y = lft + (((double)(rght - lft) / (array[rght] - array
					[lft])) * (value - array[lft]));
		if (y < size)
			printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", y);
			break;
		}

		if (array[y] == value)
			return (y);
		if (array[y] > value)
			rght = y - 1;
		else
			lft = y + 1;
	}

	return (-1);
}
