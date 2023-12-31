#include "main.h"

/**
 * _isalpha - Check if a character is alphabet
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
