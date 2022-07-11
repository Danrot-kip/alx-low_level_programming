#include "main.h"

/**
 * _strlen - main description
 *@s: return the length
 *Return: return sucess
*/

int _strlen(char *s)
{
	int length;
	
	while (s[length])
		length++;
	return (length);
}

