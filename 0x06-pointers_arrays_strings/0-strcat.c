#include "main.h"
/**
 * main - A function that concatenates two strings.
 * @dest: destination string.
 * @src: the sorce string.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)

{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
