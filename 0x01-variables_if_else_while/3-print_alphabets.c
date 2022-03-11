#include <stdio.h>

/**
 * main - print all alphabet both lower and upper case at once
 *
 * Return: 0 Always
 */

int main(void)
{
	char ch, chh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (chh = 'A'; chh <= 'Z'; chh++)
	{
		putchar(chh);
	}
	putchar('\n');
	return (0);

}
