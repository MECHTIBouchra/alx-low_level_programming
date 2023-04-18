#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - Init a variable of type struct dog
  * @d: struct dog*
  * @name: char*
  * @age: float
  * @owner: char*
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
