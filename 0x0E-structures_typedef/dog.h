#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure describing a very cute puppy
 * @name: the dogs name
 * @age: the age of the dog
 * @owner: who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
