#include "main.h"

/**
 *my_function - print-alphabet.
 *
 *Function that print alphabet in lowercase
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
