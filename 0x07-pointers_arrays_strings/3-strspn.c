#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: character from string
 * @accept:the second character
 *
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsighned int lenght = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (int l = 0; accept[l] != '\0'; l++)
		{
			if (accept[l] == s[i])
			{
				found = 1;
				break;
			}
			if (!found)
			{
				return (lenght);
			}

			lenght++;
		}

		return (lenght);
	}
}
