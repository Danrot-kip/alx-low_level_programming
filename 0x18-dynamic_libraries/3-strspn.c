#include "main.h"

/**
 * _strspn - main description
 * @s: array of char
 * @accept: array
 * Return: char string
 */
unsigned int _strspn(char *s, char *accept)

{

int i, j;

unsigned int contador = 0;

for (i = 0; s[i] != '\0' ; i++)

{

for (j = 0; accept[j] != '\0' ; j++)

{

if (s[i] == accept[j])

{

contador++;

break;

}

}

if (s[i] != accept[j])

break;

}

return (contador);

}
