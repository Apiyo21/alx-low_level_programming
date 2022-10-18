#ifndef MAIN_H_
#define MAIN_H_

/*
* main - print _putchar
* return: 0
*/

void print_alphabet(void);

/**
 * print alphabets in lowercase
 */

void print_alphabet_x10(void);

/**
 * prints_alphabet_x10 - print lowercase alphabet ten times
 */

int _islower(int c);

/**
 * _islower - checks for lowercase
 *@c: the character to check
 *Return: int
 */

int _isalpha(int c);

/**_isalpha - checks for alphabet character
 * @c: the character to check
 * Retrun: 1 if lower or uppercase, 0 if not alphabet character
 */


int print_sign(int n);

/**
 * print_sign - prints sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int _abs(int);

/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
int _putchar(char c);

/**
 * prints _putchar
 * Return: 0 for success
 */

#endif
