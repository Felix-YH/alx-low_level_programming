#include "main.h"
#include <stdio.h>

/**
 * check the code
 * 
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
