#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concantenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return : Null on failure
 **/

char *str_concat(char *s1, char *s2)
{
	int i;
	int len = 0;
	int j = 0;
	char *cbine;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

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

	cbine[len] = '\0';

	return (cbine);

}
