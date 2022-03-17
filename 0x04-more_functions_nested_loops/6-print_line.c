#include "main.h"
/**
 * print_line - draw a straightline
 * @n: number of lines
 *
 * Return: line
 */

void print_line(int n)
{
	int lthn;

	if (n > 0)
	{
		for (lthn = 0; lthn < n; lthn++)
			_putchar('_');
	}
	_putchar('\n');

}

