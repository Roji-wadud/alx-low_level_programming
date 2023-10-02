#include <stdio.h>
/**
 * main - A program that prints all arguments it receives.
 * @argc: lenght of the string.
 * @argv: the sring passed to the arguments
 * Return: Alway 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
