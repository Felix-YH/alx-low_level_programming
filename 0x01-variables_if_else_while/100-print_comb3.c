#include <stdio.h>
/**
 * main - print all posible combination of
 * double digits, where the reverse of a
 * combination is conisdered the same.
 * use putchar only 5 times
 *
 * Return: 0 Always
 */

int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++;
	}
	putchar('\n');
	return (0);
}

