#include "main.h"
/**
 * main - Function that concatenate two string.
 * @strncat: the funtion the concatenate two string with specify value
 * @dest: string destination.
 * @src: soruce sring to be appended.
 * @n: for max that it can contain.
 * Return: a pointer to the resulting string  'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
