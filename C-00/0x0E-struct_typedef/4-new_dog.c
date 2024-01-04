#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog;
  char *tname;
  char *towner;

  tname = malloc(sizeof(*name) * strlen(name) + 1);
  towner = malloc(sizeof(*owner) * strlen(owner) + 1 );
  new_dog = malloc(sizeof(dog_t));

  if (tname && towner && new_dog)
  {
    strcpy(tname, name);
    strcpy(towner, owner);
    new_dog->name = tname;
    new_dog->age = age;
    new_dog->owner = towner;

  }
  else
  {
    free(towner);
    free(tname);
    free(new_dog);
    return (NULL);
  }
  
  return (new_dog);

}
