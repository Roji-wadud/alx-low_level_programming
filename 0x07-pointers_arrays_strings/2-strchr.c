#include "main.h"
/**
 * _strchr - locate a character in string
 * @s: string to search
 * @c: string to locate
 *
 * Return: first char in the string,or null if it isn't found
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);

	}
	return (0);
}
