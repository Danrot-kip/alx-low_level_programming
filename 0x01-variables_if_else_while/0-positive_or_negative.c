#include <stdlib.h>

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
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
	return (0);

}

