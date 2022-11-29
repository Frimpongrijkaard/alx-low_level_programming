#include "dog.h"
#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
=======
>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
#include <stdlib.h>

/**
 * print_dog- display dog
 * @d: pointer to struct on dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
<<<<<<< HEAD
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
=======
		printf("Name:(nil)\n");
	else
		printf("Name:%s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age:%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner:%s\n", d->owner);
>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
}
