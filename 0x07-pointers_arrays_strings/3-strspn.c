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

		for (i = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (lenght);
			}
		}

		s++
	}

	return (lenght);
}
