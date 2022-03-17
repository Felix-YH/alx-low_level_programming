#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 *
 * Return: 0 Always
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 100; i++)
	{
		j = i % 3;
		k = i % 5;

		if (j == 0)
		{
			printf("Fizz ");
		}
		else if (k == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);


}
