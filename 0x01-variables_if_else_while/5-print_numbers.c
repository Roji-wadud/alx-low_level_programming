#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	char singleDigitBaseTen;

	for (singleDigitBaseTen = 0; singleDigitBaseTen < 10; singleDigitBaseTen++)
	{
		printf("%i", singleDigitBaseTen);
	}

	putchar('\n');

	return (0);
}
