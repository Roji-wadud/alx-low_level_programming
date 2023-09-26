#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: parameter
 * @size: parameter
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int count 1 = 0;
	int count2 = 0;

	for (x = 0; x < size; x++)
	{
		count1 = count1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		count2 += a[x *size + (size - x - 1)];
	}

	printf("%d, %d\n", count1, count2);
}
