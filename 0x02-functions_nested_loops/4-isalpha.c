#include "main.h"

/**
 * _isalpha - check whether a character is upper case
 * and returns 1
 * @c:  character
 *
 * Return: 0 Always
 */

int _isalpha(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
