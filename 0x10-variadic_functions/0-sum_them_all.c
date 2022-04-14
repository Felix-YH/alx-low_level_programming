#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all parameters
 * @n: number of agruments
 *
 * Return: sum of all parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
