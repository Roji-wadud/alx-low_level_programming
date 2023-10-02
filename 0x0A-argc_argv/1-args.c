#include <stdio.h>
/**
 * main - A  program that prints the number of arguments passed into it.
 * @argc: lenght of the string
 * @argv: string pass to the command-line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
