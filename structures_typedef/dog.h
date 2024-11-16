#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Defines a dog structure with name, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
