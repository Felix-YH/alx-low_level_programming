#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locate any character in a string
 * @s: string
 * @accept: character to locate
 *
 * Return: S if found else return NULL
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);

}
