#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of times
 *
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int len, sp;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (sp = 0; sp < len; sp++)
				_putchar(' ');
			_putchar('\\');
			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}

