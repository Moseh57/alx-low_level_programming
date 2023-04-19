#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees the dog
 * @d: the doggy
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
