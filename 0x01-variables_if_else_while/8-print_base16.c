#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 16;)
	{
		putchar(a + '0');
		puthcar(a - 10 + 'a');
		a++;
	}
	putchar('\n');
	return (0);
}
