#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, e, k;

	for (i = 0; i < 10; i++)
	{
		for (e = 0; e < 10; e++)
		{
			k = e * i;
			if (e == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && e != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
