#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intialize a variable of a struct dog
 * @d: pointer to initialise dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 **/

void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
