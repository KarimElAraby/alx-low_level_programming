#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - to get length of string
 *
 * @str : the string
 *
 * Return: lenght of string
 *
 */

int _strlen(const char *str)
{
int length = 0;

while (*str++)
	length++;
return (length);
}

/**
 * _strcpy - functiont to copy
 *
 * @src : string to copy
 * @dest : copy here
 *
 * Return: @dest
 *
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
	dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - create a new dog
 *
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owner
 *
 * Return: to dog , NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;

if (!name || age < 0 || !owner)
	return (NULL);

p = (dog_t *) malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);

p->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*p).name == NULL)
{
free(p);
return (NULL);
}

p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*p).owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
p->name = _strcpy(p->name, name);
p->age = age;
p->owner = _strcpy(p->owner, owner);

return (p);
}
