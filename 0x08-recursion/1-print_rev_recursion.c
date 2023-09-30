#include "main.h"
/**
 * _print_rev_recursion - function that prints a sting in reverse.
 * @s: string.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
