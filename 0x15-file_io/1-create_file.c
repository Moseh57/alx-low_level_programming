#include "main.h"
/**
 * counts - a function that helps me count length of string
 * @text: the string ti count
 * Return: the length of the string
 */
int counts(char *text)
{
	int i = 0;

	while (text[i] != '\0')
		i++;
	i += 1;
	return (i);
}
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: the content of the file
 * Return: 1 if success -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int a, b = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		b = counts(text_content);
	a = write(fd, text_content, b);
	if (a == -1)
		return (-1);
	close(fd);
	return (1);
}
