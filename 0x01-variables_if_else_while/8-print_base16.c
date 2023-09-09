#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num= 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for(alpha = '0'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
