#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: lenght of the string
 * @argv: string passed to command-line
 *
 * Return:error (1) or success (0)
 */
int main(int argc, char *argv[])
{
	int num1, num2, total;
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	total = num1 * num2;

	printf("%d", total);

	return (0);

}
