#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/*my code goes here*/
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater that 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, m);
	}
	return (0);
}
