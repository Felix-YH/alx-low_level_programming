#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new string which is a duplicate of str
 * @str: string
 *
 * Return: str
 **/

char *_strdup(char *str)
{
	char *dp;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dp = malloc(sizeof(char) * (len));

	if (dp ==  NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dp[i] = str [i];

	dp[len] ='\0';

	return (dp);

}
