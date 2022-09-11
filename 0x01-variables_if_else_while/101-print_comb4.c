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
	int i = 0;
	int j_d;
	int k_d;
	int l_d;

	while (i <= 999)
	{
		j_d = (i / 100 + '0');
		k_d = (i / 10 % 10 + '0');
		l_d = (i % 10 + '0');

		if ((j_d < k_d) && (k_d < l_d))
		{
			putchar(j_d);
			putchar(k_d);
			putchar(l_d);

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
