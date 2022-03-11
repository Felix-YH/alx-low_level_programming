#include <stdio.h>
/**
 * main - print number from 0 to 9 using putchar
 * separated by commas
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 88)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
