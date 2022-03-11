#include <stdio.h>

/**
 * main - print all alphabet at once 
 * but in reverse using putchar
 *
 * Return: 0 Always
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);

}
