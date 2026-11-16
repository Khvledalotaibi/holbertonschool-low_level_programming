
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a dog and copies its name and owner
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
