#include <unistd.h>
#include <stdio.h>

/**
 * main - print _putchar to screen
 * @char: the character
 *Return: 0 Always
 */

int _putchar(char);
int main(void)
{
	_putchar(95);
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
/**
 * _putchar - print the character c to stdout
 * @c: The charatcer to print
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
