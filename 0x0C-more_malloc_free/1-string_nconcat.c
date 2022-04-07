#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstring;
	unsigned int i, j, k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (j = 0; s2[j]; j++)
		len++;

	nstring = malloc(sizeof(char) * (len + 1));

	if (nstring == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		nstring[k++] = s1[i];
	}

	for (j = 0; s2[j] && j < n; j++)
	{
		nstring[k++] = s2[j];
	}
	nstring[k] = '\0';

	return (nstring);

}
