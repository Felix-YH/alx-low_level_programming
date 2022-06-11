#include "main.h"

/**
 * _strcmp - compares two strings and return a value
 * @s1: first string
 * @s2: second string
 *
 * Return: value
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
