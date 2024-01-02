#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{

  if (d->name == NULL)
    printf("(nil)");
  else 
    printf("Name: %s\n", d->name);

  if (d->age <= 0)
    printf("(nil)");
  else 
    printf("Age: %.6f\n", d->age);

  if (d->owner == NULL)
    printf("(nil)");
  else 
    printf("Owner: %s\n", d->owner);

}
