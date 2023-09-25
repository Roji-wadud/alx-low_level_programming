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
	if (s ==  NULL)
	{
		return (NULL);
	}

	for (; *s[i] != '\0'; s++)
		if (*s == c)
		{
			return (s);
		}
	if (*s == c)
		return (s);
	return (NULL);
}
