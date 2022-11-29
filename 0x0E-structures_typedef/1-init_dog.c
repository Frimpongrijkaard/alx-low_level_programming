#include "dog.h"
<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * init_dog- initialization of dog variables
 * @d: structure d variable
=======
#include <stdlib.h>


/**
 * init_dog- initialization of dog variables
 * @d: The dog to be initializede
>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
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
