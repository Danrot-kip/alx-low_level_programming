/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char letter = 'z';

char r = '\n';

while (letter >= 'a')

{

putchar (letter);

letter--;

}

putchar (r);

return (0);

}
