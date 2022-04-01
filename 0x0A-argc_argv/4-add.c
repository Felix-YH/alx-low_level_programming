#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print a program that mulipliies two numbers it receives.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always
 **/

int main (int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);

}
