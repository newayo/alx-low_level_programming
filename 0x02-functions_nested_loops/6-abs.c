#include "main.h"
/**
 * print_abs - function that prints the absolute value of an integer
 * @c: is the int that we will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (* -1);
	}
}
