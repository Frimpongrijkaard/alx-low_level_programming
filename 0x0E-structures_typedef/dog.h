#ifndef DOG_H

#define DOG_H
#include "main.h"

/**
 * struct dog - dog description
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t- change struct dog to dog_t
 */
typedef struct dog dog_t;

#endif
