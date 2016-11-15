#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: structure variable of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int nl, ol;

	for (nl = 0; name[nl] != '\0'; ++nl)
		;

	d->name = malloc(nl * sizeof(char));

	for (nl = 0; name[nl] != '\0'; ++nl)
		d->name[nl] = name[nl];

	d->age = age;

	for (ol = 0; owner[ol] != '\0'; ++ol)
		;

	d->owner = malloc(ol * sizeof(char));

	for (ol = 0; owner[ol] != '\0'; ++ol)
		d->owner[ol] = owner[ol];
}
