#include <stdio.h>
/**
 * print_first - a function that is a constructor
 */
void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
