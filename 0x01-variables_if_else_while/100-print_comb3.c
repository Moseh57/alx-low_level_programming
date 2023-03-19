#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10;)
	{
		for (b = 0; b < 10;)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a == 8)
					break;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
