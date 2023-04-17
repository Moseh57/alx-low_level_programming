#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints first arg
 * @argc: the argument counter
 * @argv: the argument array
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
