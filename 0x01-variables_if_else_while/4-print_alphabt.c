/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char letter = 'a';

char l = '\n';

while (letter <= 'z')

{

if (letter != 'q' && letter != 'e')

{

putchar (letter);

}

letter++;

}

putchar (l);

return (0);

}
