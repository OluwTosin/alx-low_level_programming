#include"dog.h"
#include <stdio.h>

/**
 * init_dog - initialzee the dog
 * @d: the pointer of the dog
 * @name: the nme of the dog
 * @age: the age of the dog
 * @owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
