#include <stdio.h>
/**
 * main - _putchar writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Success).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
