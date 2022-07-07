#include "main.h"


/**
 *print_last_digit - prnts the last digit
 *@n: integer to pe printe
 *Return: return the last digit
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
