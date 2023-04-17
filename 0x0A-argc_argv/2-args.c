#include <stdio.h>
/**
 * main - a function to print the arguments
 * @argc: the integer no of arguments
 * @argv: the array of aarguments
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
