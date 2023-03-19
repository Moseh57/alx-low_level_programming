#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 9;)
	{
		putchar(a + '0');
		putchar(',', ' ');
		a++;
	}
	putchar(9 + '0');
	putchar('\n');
	return (0);
}
