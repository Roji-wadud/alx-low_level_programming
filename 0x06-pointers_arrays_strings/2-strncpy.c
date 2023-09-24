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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		while(i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);

}
