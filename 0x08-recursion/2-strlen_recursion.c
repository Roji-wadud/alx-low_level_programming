#include "main.h"
/**
 * int _strlen_recursion - function that print lenght of a string.
 * @s: string
 *
 * Return: lenght of that string pass in
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
