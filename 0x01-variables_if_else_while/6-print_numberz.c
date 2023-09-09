#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	int  singleDigitBaseTen;

	for (singleDigitBaseTen = 0; singleDigitBaseTen < 10; singleDigitBaseTen++)
	{
		putchar((singleDigitBaseTen % 10) + '0');
	}
	putchar('\n');

	return (0);
}
