#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that creates a variable of type struct dog
 * @d: a char to be printed
 * @name: the odgs name
 * @age: the dogs age
 * @owner: the dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
