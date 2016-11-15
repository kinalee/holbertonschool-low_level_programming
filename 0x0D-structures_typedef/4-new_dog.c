#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol;
	dog_t *new_dog_1;

	new_dog_1 = malloc(sizeof(dog_t));

	if (name != NULL)
	{
		for (nl = 0; name[nl] != '\0'; ++nl)
			;
		new_dog_1->name = malloc(nl * sizeof(char));

		if (new_dog_1->name == NULL)
			return (NULL);

		for (nl = 0; name[nl] != '\0'; ++nl)
			new_dog_1->name[nl] = name[nl];
	}
	else
		return (NULL);

	if (owner != NULL)
	{
		for (ol = 0; owner[ol] != '\0'; ++ol)
			;
		new_dog_1->owner = malloc(ol * sizeof(char));

		if (new_dog_1->owner == NULL)
			return (NULL);

		for (ol = 0; owner[ol] != '\0'; ++ol)
			new_dog_1->owner[ol] = owner[ol];
	}
	else
		return (NULL);

	new_dog_1->age = age;

	return (new_dog_1);

}
