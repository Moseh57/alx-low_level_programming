#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float f;
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)", sizeof(f));
	return 0;
}
