#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print from given number to 98
 * @n: given number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d", n++);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);
	}
}
