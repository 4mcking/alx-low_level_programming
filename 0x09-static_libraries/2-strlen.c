#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
