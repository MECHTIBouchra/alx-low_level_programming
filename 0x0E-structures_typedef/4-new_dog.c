#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * new_dog - Create new dog
  * @name: char*
  * @age: float
  * @owner: char*
  * Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = strcpy(ndog->owner, owner);

	return (ndog);
}
