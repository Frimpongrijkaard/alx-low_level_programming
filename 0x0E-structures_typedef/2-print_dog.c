#include "dog.h"
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_dog- display dog
 * @d: pointer to struct on dog
 *
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	if (d->age < 0)
		printf("age: (nil)\n");
	else
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
	if (d == NULL)
		return;
}
