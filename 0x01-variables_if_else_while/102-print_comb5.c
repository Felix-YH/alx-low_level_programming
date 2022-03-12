#include <stdio.h>
/**
 * main - print all posible combination of
 * double digits, where the reverse of a
 * combination is conisdered is allowed.
 * use putchar only 5 times
 *
 * Return: 0 Always
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}

