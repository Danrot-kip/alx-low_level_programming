#include "main.h"


/**
 *print_sign -  print_sign
 *@n: n is an integer
 *Return: return 0 or 1 or -1
 */


int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_pitchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
