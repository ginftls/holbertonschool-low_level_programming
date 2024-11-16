#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name, age, and owner.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 *
 * This structure holds information about a dog, including its name,
 * age, and owner.
 */
struct dog
{
	char *name;  /**< The name of the dog. */
	float age;   /**< The age of the dog. */
	char *owner; /**< The owner of the dog. */
};

/**
 * dog_t - Typedef for struct dog.
 *
 * This typedef provides a new name 'dog_t' for the type 'struct dog'.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * This function initializes the members of the struct dog with the
 * provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * This function prints the members of the struct dog in the specified format.
 * If an element of d is NULL, it prints (nil) instead of this element.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * This function creates a new dog with a copy of the provided name and owner.
 * It returns a pointer to the new dog or NULL if the function fails.
 *
 * Return: Pointer to the new dog or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
