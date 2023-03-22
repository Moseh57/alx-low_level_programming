#include <stdio.h>
/**
 * main - function for fibonnaci
 * Return: 0 (Success)
 */


int main(void)
{
	int a;
	unsigned long int f;
	unsigned long int f2;
	unsigned long int b;

	f = 0;
	f2 = 1;

	for (a = 0; a < 50; a++)
	{
		b = f + f2;
		printf("%lu", b);

		f = f2;
		f2 = b;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
