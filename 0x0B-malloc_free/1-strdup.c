#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aa;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	aa = malloc(sizeof(char) * (a + 1));

	if (aa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aa[r] = str[r];

	return (aa);
}
