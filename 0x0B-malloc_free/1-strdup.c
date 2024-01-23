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
	if (str == NULL) {
		return NULL;
	}

	char *duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL) {
		return NULL;
    }

	strcpy(duplicate, str);
	return duplicate;
}

int main() {
	char *original = "Hello, World!";
	char *duplicate = _strdup(original);

	if (duplicate != NULL) {
	printf("Original string: %s\n", original);
	printf("Duplicated string: %s\n", duplicate);
	free(duplicate);
	} else {
	printf("Failed to duplicate the string due to insufficient memory.\n");
	}

	return 0;
}
