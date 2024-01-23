#include <stdio.h>
#include <stdlib>
#include "main.h"
#include <string.h>
/**
 *_strdup -Duplicate to new memory space location
 *@str: char
 *Return: 0
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
