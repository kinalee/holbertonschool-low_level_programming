#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct
 * @d: structure variable of dog
 *
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
