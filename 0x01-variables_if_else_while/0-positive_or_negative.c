#include <stdio.h>
#include <stdlib.h>

/**
* main - we are using random rand
* alwasy return 0
*/

int main(void)
{

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative", n);

}

return (0);
}
