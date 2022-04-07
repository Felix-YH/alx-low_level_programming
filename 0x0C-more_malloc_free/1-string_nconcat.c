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
	unsigned int i;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	nstring = malloc(sizeof(char) * (len + 1));

	if (nstring == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		nstring[len] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		nstring[len++] = s2[i];
	}
	nstring[k] = '\0';

	return (nstring);

}
