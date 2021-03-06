#include "main.h"

/**
 * times_table - function to print times table
*
 * Return: none - void function
 */

void times_table(void)

{
	int col = 0, row = 0, units = 0, tens = 0, n = 0;

	while (row < 10)
	{
		while (col < 10)
		{
			n = col * row;
			units = n % 10;
			tens = (n - units) / 10;
			if (col > 0)
			{
				_putchar(' ');
				(tens <= 0) ? _putchar(' ') : _putchar(tens + '0');
			}
			_putchar(units + '0');
			if (col < 9)
				_putchar(44);
			col++;
		}
		col = 0;
		row++;
		_putchar(10);
	}
}
