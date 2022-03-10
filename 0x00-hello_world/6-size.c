#include <stdio.h>

/**
 * main - Prints the sizes of types based
 * on computers
 *
 * Return 0 Always
 */

int main(void)
{
	int i;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of a char:%c\n", sizeof(b));
	printf("size of an int:%i\n", sizeof(i));
	printf("size of a long int:%li\n", sizeof(c));
	printf("size of a lonng long int:%lli\n", sizeof(d));
	printf("size of a float:%f\n", sizeof(e));
	return (0);

}
