#include "dog.h"
#include <stdio.h>
#include "main.h"

/**
 * init_dog- initialization of dog variables
 * @d: structure d variable
 * @name: charater name
 * @age: age in float of the dog
 * @owner: owner of the dog
 *
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
