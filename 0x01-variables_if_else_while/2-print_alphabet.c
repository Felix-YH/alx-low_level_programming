#include <stdio.h>

/**
 * main - print all alphabet at once
 *
 * Return: 0 Always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
