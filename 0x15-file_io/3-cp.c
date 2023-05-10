#include "main.h"
/**
 * main - a function to copy from one file to another
 * @ac: the number of arguments passed
 * @av: the current argument
 * Return: the number of read bytes
 */
int main(int ac, char **av)
{
	int fd, fd2, n;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((n = read(fd, buff, 1024)) > 0)
	{
		write(fd2, buff, n);
	}
	close(fd);
	close(fd2);
	return (0);
}
