#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - the fre memory allocated for a struct dog
 * @d: the struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

