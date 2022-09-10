#include <stdio.h>

/**
 * main - prints if the number is positive, zero or negative
 *
 * Description: using the main function the program
 * prints "Programming is positive, zero or negative
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 0; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k = '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

