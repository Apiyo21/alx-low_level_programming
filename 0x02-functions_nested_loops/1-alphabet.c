#include"main.h"

/**
* prints the alphabet, in lowercase
* Return: o
*/

void print_alphabet(void)
{
	char achola;

	achola = 'a';
	while (achola <= 'z')
	{
		_putchar(achola);
		achola++;
	}
	_putchar('\n');
}
