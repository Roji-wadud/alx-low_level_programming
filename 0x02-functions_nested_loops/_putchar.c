#include <unistd.h>
#include <stdio.h>
/**
 * main - defining own _putchar
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
