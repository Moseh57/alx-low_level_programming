#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: the string separator
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *wrd;

	if (separator == NULL)
		separator = "";
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		wrd = va_arg(lst, char*);
		if (wrd == NULL)
			printf("(nil)");
		else
			printf("%s", wrd);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(lst);
	printf("\n");
}
