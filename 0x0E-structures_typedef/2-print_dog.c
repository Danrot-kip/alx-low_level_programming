#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct
 * Description: function that prints a struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
{
d->name = "(nil)";
printf("Name: %s\n", d->name);
}
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
d->owner = "(nil)";
printf("Owner: %s\n", d->owner);
}
else
printf("Owner: %s\n", d->owner);
}
