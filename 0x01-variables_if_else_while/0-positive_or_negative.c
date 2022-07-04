#include <stdlib.h>
#include <time.h>
#include<stdlib.h>
/**
* main - main using rand for random
* the if checks if for negative and posive
*/

int main(void)



{



	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 1)
	{
		printf("%d is positive");
	}
	else if (n < 0)
	{
		printf("%d is negative");
	}
	else
	{
		printf("%d is zero");
	}
	return (0);

}

