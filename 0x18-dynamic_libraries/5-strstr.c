#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate any character in a string
 * @haystack: string
 * @needle: character to locate
 *
 * Return: S if found else return NULL
 **/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);

}
