#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that sums all arguments
 * @n: length of arguments
 * @...: a variables number of argument
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum = 0;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
