#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowwercase.
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
