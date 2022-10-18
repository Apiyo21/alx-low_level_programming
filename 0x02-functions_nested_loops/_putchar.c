#include <unistd.h>

/**
 * main - _putchar prototype
 * return: 1 on success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
