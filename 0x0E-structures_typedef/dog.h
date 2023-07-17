#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a varibale of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: god age
 * @owner: god owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

