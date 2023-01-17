#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int p1, q1, y;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (p1 = 0; name[p1]; p1++)
		;
	p1++;
	d->name = malloc(p1 * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (y = 0; y < p1; y++)
		d->name[y] = name[y];
	d->age = age;
	for (q1 = 0; owner[q1]; q1++)
		;
	q1++;
	d->owner = malloc(q1 * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (y = 0; y < q1; y++)
		d->owner[y] = owner[y];
	return (d);
}
