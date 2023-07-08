#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int index;
	unsigned long b1 = 0, b2 = 1, sum;

	for (index = 0; index < 50; index++)
	{
		sum = b1 + b2;
		printf("%lu", sum);

		b1 = b2;
		b2 = sum;

		if (index == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
