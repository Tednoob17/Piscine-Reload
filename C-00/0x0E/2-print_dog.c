#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{

  if (d.name == NULL)
    printf("(nil)")
    else if
      printf("Name: %s\n", d->name);

  if (d.age == NULL)
    printf("(nil)")
    else if
      printf("Age: %1.f\n", d->age);

  if (d.owner == NULL)
    printf("(nil)")
    else if
      printf("Owner: %s\n", d->owner);
}
