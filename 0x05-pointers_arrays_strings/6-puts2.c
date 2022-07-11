#include "main.h"

/**
 * puts2 - main description
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)

{

int longitud = 0;

while (str[longitud] != '\0')

{

if (longitud % 2 == 0)

{

_putchar(str[longitud]);

}

longitud++;

}

_putchar('\n');

}
