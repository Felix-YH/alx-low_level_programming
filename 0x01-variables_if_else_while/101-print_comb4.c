#include <stdio.h>
/**
 * main - print all posible combination of
 * three digits, where the reverse of a
 * combination is conisdered the same.
 * use putchar only 6 times
 *
 * Return: 0 Always
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar('\n');
	return (0);
}
