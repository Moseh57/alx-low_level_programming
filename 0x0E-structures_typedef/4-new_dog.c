#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - a function to create a new dog
 * @name: the name of the doggy
 * @age: the age of the doggy
 * @owner: the owner of the dog
 * Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * j + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
/**
 * _strcpy - a function that copies a string to another
 * @dest: destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - a function that calculates the length of a string
 * @s: the pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
