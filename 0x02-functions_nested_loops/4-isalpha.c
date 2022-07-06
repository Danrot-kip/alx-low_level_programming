#include "main.h"


/**
 * _isalpha - checks c if lower or upper
 * @c: c is lower or upper case
 *
 * Return: 0 if success else otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
