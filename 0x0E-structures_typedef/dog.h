#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure called dog
 * @name: a member of char datatype
 * @age: a member of float datatype
 * @owner: a member of char datatype
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
