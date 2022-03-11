#include <stdio.h>
/**
 * main - print numbers from 0 to 9 using putchar
 *char is not allowed
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
