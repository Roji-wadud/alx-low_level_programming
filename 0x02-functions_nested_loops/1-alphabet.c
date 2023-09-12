#include "main.h"

/**
 * main - function for printing lowercase alphabet.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}

	_putchar('\n');
}
