#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name, age, and owner.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 *
 *Description:This structure holds information about a dog, including its name,
 * age, and owner.
 */
struct dog
{
	char *name;  /**< The name of the dog. */
	float age;   /**< The age of the dog. */
	char *owner; /**< The owner of the dog. */
};

#endif /* DOG_H */
