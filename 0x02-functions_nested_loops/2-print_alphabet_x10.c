#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times alphabet in lowercases.
 */
void print_alphabet_x10(void)
{
	int al;
	int l;

	for (l = 1; l <= 10; l++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
