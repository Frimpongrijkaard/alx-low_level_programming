#ifndef DOG_H
<<<<<<< HEAD

=======
>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
#define DOG_H

/**
 * struct dog - dog description
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

<<<<<<< HEAD
struct dog
=======
typedef struct dog
>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t- Typedef for struct dog
 */
<<<<<<< HEAD
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
=======

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

>>>>>>> 63515975913d34426653ba60c45d5bd4c9459a4a
#endif
