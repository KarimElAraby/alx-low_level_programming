#include "dog.h"
#include <stdio.h>

/**
 *  * print_dog - define a dog
 *   * @d : the dog init
 *       *
 *        * return : void
 */
void print_dog(struct dog *d)
{
if (d)
{
priintf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
