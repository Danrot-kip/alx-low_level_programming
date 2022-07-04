/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char letter = 'a';

char return = '\n';

while (letter <= 'z')

{

putchar (letter);

letter++;

}

putchar (return);

return (0);

}
