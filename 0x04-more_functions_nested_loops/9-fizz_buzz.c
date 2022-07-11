#include "main.h"
#include <stdio.h>

/**
 *main - print out integers 1 -100
 *Return: return success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
