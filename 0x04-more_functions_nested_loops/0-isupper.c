#include "main.h"

/**
 * _isupper - checks c if it is small letter
 *
 *@c: checks if its lower
 * Return: 0 otherwise and return 1 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
