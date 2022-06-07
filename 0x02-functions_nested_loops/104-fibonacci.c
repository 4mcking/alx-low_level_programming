#include <stdio.h>

/**
 ** main - Prints the first 98 Fibonacci numbers, starting with
 **        1 and 2, separated by a comma followed by a space.
 **
 ** Return: Always 0.
 **/
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
		printf("\n");
		return (0);
}
