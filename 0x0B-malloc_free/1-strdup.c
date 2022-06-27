#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);
	while (str[c] != '\0')
		c++;
	t = malloc(sizeof(char) * c + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		t[i] = str[i];
	return (t);
}
