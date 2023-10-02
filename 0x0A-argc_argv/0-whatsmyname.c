#include <stdio.h>
/**
 * main - Entry point
 * destcription: Program tha tprints its name including the path.
 * @argc: The number of command_line arguments
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
