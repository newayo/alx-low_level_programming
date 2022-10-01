#include "main.h"
/**
 *_isalpha - function to chech if c is a letter, lowaer case or upper case
 *@c: int that we will use for the argument of the function
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
