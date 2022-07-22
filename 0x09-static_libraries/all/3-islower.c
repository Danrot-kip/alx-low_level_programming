#include "main.h"

/**
 * _islower - checks c if it is small letter
 *
 *@c: checks if its lower
 * Return: 0 otherwise and return 1 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
