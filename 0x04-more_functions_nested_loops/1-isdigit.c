#include "main.h"
/**
 * _isdigit - check for a digit
 *@c: parameter.
 *
 * Return: 1 if it is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 54)
	{
		return (1);
	}
	return (0);
}
