#include <stdio.h>
/**
 * main - program that prints the alphabet in reverse
 *
 * Return: Alway 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
