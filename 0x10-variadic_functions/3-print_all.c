#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: the type specifier
 * @...: arguments to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *temp;
	char *s = "";
	va_list lst;

	va_start(lst, format);
	while (format[i])
	{
		if (format[i] != 'c' && format[i] != 'i' &&
				format[i] != 'f' && format[i] != 's')
		{
			i++;
			continue;
		}
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(lst, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(lst, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(lst, double));
				break;
			case 's':
				temp = va_arg(lst, char*);
				if (!temp)
					temp = "(nil)";
				printf("%s%s", s, temp);
				break;
		}
		s = ", ";
		i++;
	}
	printf("\n");
	va_end(lst);
}
