#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a functiont that prints inputed numbers
 * @separator: separates the numbers
 * @n: the number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(lst);
}

