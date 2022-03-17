#include "main.h"

/**
 * more_numbers -  print numbers from 1 to 14
 *
 * Return: values
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 13; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j % 10;
			_putchar(k + '0');
			if (j >=9 && j < 14)
				_putchar(49);
		}

		_putchar('\n');
		
	}

}

