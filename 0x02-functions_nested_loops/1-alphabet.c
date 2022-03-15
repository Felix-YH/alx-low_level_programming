#include "main.h"

/**
 * main - Print all alphabet in lower case
 * using _putchar twice
 *
 * Return: 0 Always
 */

int main(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

