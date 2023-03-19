#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10;)
	{
		putchar(a + '0');
		putchar(',');
		putchar('\n');
		a++;
	}
	putchar('\n');
	return (0);
}
