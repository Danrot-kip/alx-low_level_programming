#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: numbers and a new line
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putcha(i);
	}
	_putchar('\n');
}
