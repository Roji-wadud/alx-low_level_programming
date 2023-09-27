#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: character from string
 * @accept:the second character
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsighned int lenght = 0;

	int i;

	while (*s)
	{

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (lenght);
			}
		}

		s++;
	}

	return (lenght);
}
