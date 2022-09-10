#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - prints if the number is positive, zero or negative
 *
 * Description:: using the main function
 * this program prints "programming is positive, zero or negative
 * Return (0)
 */
int main(void)
{
	int n;

srand(time(0));
n = rand(0) - RAND_MAX / 2;
/* your code goes here */
if (n>0)
{
	printf("%i is positive\n", n);
}
else if (n==0)
{
	printf("$i is zero\n", n);
}
else if (n<0)
{
	printf("$i is negative\n", n);
}
return (0);
	}
