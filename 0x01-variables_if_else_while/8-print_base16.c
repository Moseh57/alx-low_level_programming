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
		if (a < 10)
		{
			putchar(a + 'e');
		}
		else
			putchar(a - 10 + 'A');
		a++;
	}
	putchar('\n');
	return (0);
}
