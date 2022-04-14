#include "variadic_functions.h"

/**
 * print_strings - print string follwed by new line
 * @separator: comma
 * @n: number of strings
 *
 * Return: nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

