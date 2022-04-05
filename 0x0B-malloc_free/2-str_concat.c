#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -  combine two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Null when failed
 **/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int len = 0;
	char *cbine;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	cbine = malloc(sizeof(char) * (len));

	if (cbine == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cbine[j] = s1[i];
		j++;
	}

	for (i = 0; s2[i]; i++)
	{
		cbine[j] = s2[i];
		j++;
	}

	return (cbine);
}
