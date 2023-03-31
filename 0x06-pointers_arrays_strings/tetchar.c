#include <stdio.h>
char _toupper();
int main()
{
	_toupper();
	return (0);
}
char _toupper()
{
	char a[4] = "mose";

	a[2] = a[2] -32;
	return (printf("%c\n",a[2]));
}
