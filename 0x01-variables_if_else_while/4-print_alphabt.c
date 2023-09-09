#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		continue;
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
