#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - functions who frees dogs
 * @d: dog informations
 * Return: Void 
 */

void free_dog(dog_t *d)
{
  if (d != NULL) 
  {
    free(d->name);
    free(d->owner);
    free(d);
  }
}
