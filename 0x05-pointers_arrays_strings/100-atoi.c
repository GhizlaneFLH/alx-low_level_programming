#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, a, n, len, f, temp;

	i = 0;
	a = 0;
	n = 0;
	len = 0;
	f = 0;
	temp = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = s[i] - '0';
			if (a % 2)
				temp = -temp;
			n = n * 10 + temp;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
