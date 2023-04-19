#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - a function that prints a strucure
 * @d: variable of the dog strucuture
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("nil");
	if (d->owner == NULL)
		printf("nil");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
