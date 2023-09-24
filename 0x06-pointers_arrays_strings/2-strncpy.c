#include "main.h"
/**
 *_strncpy - Copies a string up to n characters.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptd = dest;
	while (*ptd != '\0' && n > 0)
	{
		*ptd = *src;
		ptd++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptd = '\0';
		ptd++;
		n--;
	}

	return (0);

}
