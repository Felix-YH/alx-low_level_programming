#include "main.h"
#include <string.h>

/**
 * _strlen - check length of string
 * @s: string
 *
 * Return: 0 Always
 **/

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
		;
	return (str);

}
