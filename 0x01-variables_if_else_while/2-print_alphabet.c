#include <stdio.h>

/**
* main - print alphABET
* Return: lowercase a-z
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
