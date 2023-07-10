#include "main.h"
/**
 * read_textfile - a function that reads a file then writes it
 * @filename: the file to read from
 * @letters: the amount of letters to print
 * Return: the number of letters it prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b;
	char *buff;
	ssize_t fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	a = read(fd, buff, letters);
	if (a < 0)
		return (0);
	b = write(STDOUT_FILENO, buff, a);
	if (b == -1)
		return (0);
	close(fd);
	return (b);
}
