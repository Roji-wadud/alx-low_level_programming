#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	int result = 0;

	for (int i = 1; i < argc; i++)
	{
		char *number = argv[i];

		for (int j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(number);
	}
	printf("%d\n", result);
	return (0);
}
