#include "main.h"

/**
 * _islower - print 1 if a charcater is lower case and
 * 0 otherwise
 * @c: charcater
 * Return: 0 Always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar(49);
	else
		_putchar(48);
	return (0);
}
