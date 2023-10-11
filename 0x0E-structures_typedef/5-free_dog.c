#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free your dogs
 * @d: yo dags
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	/* Checks if the pointer is not empty */
	if (d != NULL)
	{
		/* Free the name and age strings */
		free(d->name);
		free(d->owner);

		/* Free the dog structure */
		free(d);
	}
}
