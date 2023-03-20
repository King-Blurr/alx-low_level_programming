#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct dog type
 * @name: char datatype
 * @age: float datatype
 * @owner: char datatype
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
