#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable type
 * @d: structure send in parameters, who contain default variable
 * @name: name of dog 
 * @age: age of dog
 * @owner: dog owner
 * @Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d->name = name;
  d->age = age;
  d->owner = owner;
}
