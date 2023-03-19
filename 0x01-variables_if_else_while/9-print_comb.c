#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;
	do {
		putchar(a + '0');
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
		a++;
	} while (a < 10);
	putchar('\n');
	return (0);
}
