#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99;)
	{
		for (b = a +1; b <= 99;)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 98)
				break;
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
