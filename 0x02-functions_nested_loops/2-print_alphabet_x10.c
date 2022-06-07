#include "main.h"

/**
 ** print_alphabet_x10 - prints 10 times the alphabet
 **
 ** Return: Always 0.
 **/
void print_alphabet_x10(void)
{
	char l;
	char c;

	for (c = 0; c <= 9; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
