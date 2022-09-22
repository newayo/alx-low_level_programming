#include "main.h"
/**
 * string_toupper - changes all the lowercase
 * letters to capital letters
 * @s: string to be capitalized
 *
 * Return: return address to the string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
