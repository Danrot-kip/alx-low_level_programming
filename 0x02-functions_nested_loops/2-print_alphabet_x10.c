#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet xtimes
 *
 * return: 0 if success
 */

void print_alphabet_x10(void)
{
	int x, s_letters;

	for (x = 1; x <= 10; x++)
	{
		for (s_letters = 'a'; s_letters <= 'z'; s_letters++)
		{
		_putchar(s_letters);
		}
		_putchar('\n');
	}
}
