#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all parameters
 * @n: number of agruments
 *
 * Return: sum of all parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
