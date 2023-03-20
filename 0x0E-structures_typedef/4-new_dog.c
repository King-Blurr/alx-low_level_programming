#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int name_len;
	int owner_len;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	name_len = strlen(name);
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	owner_len = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
