#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: name of the parameter.
 *
 * Return: 1 if it is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
