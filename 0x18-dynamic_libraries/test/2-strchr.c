#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: S if found else return NULL
 **/

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (NULL);

}
