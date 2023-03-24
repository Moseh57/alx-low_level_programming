#include "main.h"
/**
 * _isupper - function to test the uppercase of a letter
 * Return: 1 when upper 0 otherwise
 */

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
		return (0);
}
