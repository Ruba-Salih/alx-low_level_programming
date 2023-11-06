#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Entry point
 * @d: int
 * @age: int
 * @name: int
 * @owner: int
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
