#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main  - a function that adds args
 * @argc: integer to store arg length
 * @argv: array of arg
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
			printf("%d\n", isdigit(atoi(argv[i])));
		}
		printf("%d\n", sum);
	}
		return (0);
}
