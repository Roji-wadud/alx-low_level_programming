#include "main.h"
/**
 * print_chessboard - function that print chessboard
 * @a: pointer to places to print
 *
 * Return void
 */
void print_chessboard(char (*a)[8])
{
	int k, r;

	for (k = 0; k < 8; k++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[k][r]);
		}
		_putchar('\n');
	}
}
