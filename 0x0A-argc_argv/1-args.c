#include <stdio.h>
/**
 * main - a function to print the number of arguments
 * @argc: integer for no of arguments
 * @argv: array for the arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
