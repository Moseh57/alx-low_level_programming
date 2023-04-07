#include "main.h"
int pal(char *s, int i, int j);
int leng(char *s);
/**
 * is_palindrome - a function that checks if a string is a plaindrome
 * @s: the string to be checked
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (pal(s, 0, leng(s)));
}
/**
 * leng - a function to calculate the length of a string
 * @s: the string
 * Return: the length of string, 0 if empty
 */
int leng(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + leng(s + 1));
}
/**
 * pal - a function that checks for palindrome
 * @s: chaacter to be checked
 * @i: integer to be the string value
 * @j: integer to check the other end
 * Return: 1 if palindrome 0 otherwise
 */
int pal(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (pal(s, i + 1, j - 1));
}
