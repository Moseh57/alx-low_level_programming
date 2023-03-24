#include "main.h"
/**
 * more_numbers - function to call printing
 * Return: void
 */
int printing();

void more_numbers(void)
{
	int j;

	for (j = 0 ; j <= 10; j++)
	{
		printing();
		_putchar('\n');
	}

}

/**
 * printing - function to print 14
 * Return void
 */
int printing()
{
	int i;
	int k;
	int n;

	for (i=0; i < 15; i++)
	{
		if (i <= -1)
			_putchar(i + '0');
		else
		{
			k = (i % 10);
			n = (i - k) / 10;
			_putchar(n + '0');
			_putchar(k + '0');
		}
	}
	return (0);
}
