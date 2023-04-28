#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: the type specifier
 * @...: arguments to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *temp, *s = "";
	va_list lst;

	va_start(lst, format);
	while (format == NULL)
	{
		exit(0);
		fprintf(stderr, "e");
		break;
	}
	if (format)
	{
		while (format[i])
		{
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
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
		printf("\n");
		va_end(lst);
	}
}
