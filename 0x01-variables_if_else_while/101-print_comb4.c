#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10;)
	{
		for (b = 0; b < 10;)
		{
			for (c = 0; c < 10;)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a == 7)
						break;
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
