#include "main.h"
/**
 * puts_half - main description
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, indice, i;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		indice = i / 2;
	else
		indice = (i - 1) / 2;
	for (i = i - indice ; i < i ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
