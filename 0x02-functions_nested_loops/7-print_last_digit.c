#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int e;

	if (n < 0)
	n = -n;

	e = n % 10;

	if (e < 0)
		e = -e;

	_putchar(e + '0');

	return (e);
}
