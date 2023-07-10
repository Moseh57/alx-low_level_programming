#include "main.h"
/**
 * counts - a functeton that counts length of a string
 * @c: the string to measure length
 * Return: length
 */
int counts(char *c)
{
	int i = 0;

	while (c[i])
		i++;
	return (i);
}
/**
 * append_text_to_file - a function to append text to a file
 * @filename: the name of the file
 * @text_content: the content o be appended
 * Return: 1 if success, -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, b;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	b = counts(text_content);
	a = write(fd, text_content, b);
	if (a == -1)
		return (-1);
	close(fd);
	return (1);
}
