#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return - Always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("is negative");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is positive");
	}
	return (0);
}
