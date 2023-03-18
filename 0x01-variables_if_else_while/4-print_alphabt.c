#include <stdio.h>
/**
 * main - a function that prints
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
