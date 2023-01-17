#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)\n");
		printf("age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (mil)\n");
	}
}
