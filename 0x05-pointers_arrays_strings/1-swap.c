#include "main.h"

/**
 * swap_int - swaps two numbers
 *@a: integer
 *@b: integer
 * Return: return null or void
 *
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
}
