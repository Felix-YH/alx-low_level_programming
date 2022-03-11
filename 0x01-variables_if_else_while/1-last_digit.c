#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit of a random
 * number and assign its sign
 *
 * Return: 0 Always
 */

int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;
	if (ls > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	else if (ls == 0)
		printf("Last digit of %d is %d and is 0\n", n, ls);

	else
		printf("Last digit of %d is %d and is less than 5\n", n, ls);
	return (0);

}
