#include <stdio.h>

/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using the main function, this program
 * prints"programming is positive, zero and negative
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57 ; i++)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}	
