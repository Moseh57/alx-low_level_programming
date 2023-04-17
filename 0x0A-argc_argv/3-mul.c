#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the product of two integers
 * @argc: integer to store the no of arguments
 * @argv: array for the number of arguments
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
