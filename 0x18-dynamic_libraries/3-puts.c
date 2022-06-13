#include "main.h"

/**
 * _puts - print a text to standard output
 * @str: string of text
 *
 * Return: 0 Always
 **/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
