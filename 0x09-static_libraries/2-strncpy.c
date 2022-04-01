#include "main.h"

/**
 * *_strncpy - copy string from source to destination
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: 0 Always
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);

}
