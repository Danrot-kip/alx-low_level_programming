/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>



int main(void)

{

char small_letter = 'a';

char capital_letter = 'A';

char l = '\n';

while (small_letter <= 'z')

{

putchar (small_letter);

small_letter++;

}



while (capital_letter <= 'Z')

{

putchar (capital_letter);

capital_letter++;

}

putchar (l);

return (0);

}
