#include <stdio.h>
/**
 * main - print all numbers in
 * base 16 using putchar
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;
	char ch;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
