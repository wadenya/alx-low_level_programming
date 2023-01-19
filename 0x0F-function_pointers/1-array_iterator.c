#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: a str
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	if (array && action)
	{
		y = 0;
		while (y < size)
		{
			action(array[y]);
			y++;
		}
	}
}
