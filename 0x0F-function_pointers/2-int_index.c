#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: a string
 * @size:number of elements in the array array
 * @cmp:  pointer to the function to be used to compare values
 *
 * Return: void;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
				if (cmp(array[y]))
					return (y);
				y++;
			}
		}
	}
	return (-1);
}
