#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - makes a malloc-allocated copy of a string
 * @str: the string to copy
 *
 * Return: pointer to the copy, or NULL if allocation fails
 */
static char *copy_string(const char *str)
{
	size_t len = 0;
	size_t i;
	char *copy;

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog with copies of its name and owner
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the new dog, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	dog->name = copy_string(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = copy_string(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
