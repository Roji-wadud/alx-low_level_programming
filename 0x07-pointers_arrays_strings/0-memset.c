#include "main.h"
/**
 * _memset - function that fills a memory with a constant bytes
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: numbers to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int unsigned i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
