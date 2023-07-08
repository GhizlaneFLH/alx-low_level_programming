#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int d;

	for (i = 0; i < n--; i++)
	{
		d = a[i];
		a[i] = a[n];
		a[n] = d;
	}
}
