#include "main.h"

/**
 * _puts - main description
 *@str: string
 * Return: return null if success
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
		_putchar(*str);
	_putchar('\n');
}
