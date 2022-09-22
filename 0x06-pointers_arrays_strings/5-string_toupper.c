#include "main.h"
/**
 * string_toupper - changes all the lowercase
 * letters to capital letters
 * @s: string to be capitalized
 *
 * Return: return address to the string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
