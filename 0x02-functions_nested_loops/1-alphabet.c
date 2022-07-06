#include "main.h"


/**
 * print_alphabet - prints letter in lowercase
 *
 * return: return 0 is always success
 */

void  print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
	_putchar(letters);
	_putchar('\n');
	}
}
