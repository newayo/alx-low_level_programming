#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i = 0, j;

	while (i <= 98)
	{
		j = i;
		while (i <= j)
		{
			if (j != i)
			{
				putchar((i / 10) + '48');
				putchar((i % 10) + '48');
				putchar(' ');
				putchar((j / 10) + '48');
				putchar((j % 10) + '48');
				if (i != 98 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
