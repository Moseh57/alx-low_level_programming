#include "main.h"
/**
 *
 *
 */
int _pow(int b, int ex)
{
	int i, j = 1;

	for (i = 0; i < ex; i++)
		j *= b;
	return (j);
}
