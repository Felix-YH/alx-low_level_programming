#include <stdio.h>

/**
 * main - Print argument a program receives.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
