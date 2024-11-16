#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to measure
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to new dog structure, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate and copy name */
	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	/* Allocate and copy owner */
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	/* Assign values to structure members */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
