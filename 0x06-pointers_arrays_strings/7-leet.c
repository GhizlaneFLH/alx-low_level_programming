#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, je;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (je = 0; je < 10; je++)
		{
			if (n[i] == s1[je])
			{
				n[i] = s2[je];
			}
		}
	}
	return (n);
}
