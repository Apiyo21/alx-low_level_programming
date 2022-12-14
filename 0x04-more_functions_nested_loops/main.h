#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * _putchar - put character to standard output
 * @c: character to put to standrad output
 */

int _isupper(int c);

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 *_isdigit - checks for a digit 0 through 9
 *@c: digit to be checked
 *Return: 1 if true, 0 if false
 */

int mul(int a, int b);

/**
 *mul - multiplies two integers
 *@a: one integer
 *@b: second integer
 *Return: product of a and b
 */

void print_numbers(void);

/**
 *print_numbers - print 0 to 9
 */

void print_most_numbers(void);

/**
 *print_most_numbers - print 0 to 9, skip 2 and 4
 */

void more_numbers(void);

/**
 *more_numbers - print 0 to 14 ten times
 */

void print_line(int n);

/**
 *print_line(int n) - print the character "_" n times to draw a line
 *@n: number of characters to draw
 */

void print_diagonal(int n);

/**
 *print_diagonal - print character "\" n times
 *@n: number of characters to draw
 */

void print_square(int size);

/**
 *print_square - print a square of given size
 *@size: size to draw
 */

void print_triangle(int size);

/**
 *print_triangle - print traingle with #'s with given size
 *@size: size of triangle to draw
 */

void print_triangle(int size);

/**
 *print_triangle - print traingle with #'s with given size
 *@size: size of triangle to draw
 */

void print_number(int n);

/**
 *print_number = print an integer, without using long, arrays, or pointers
 *@n: number to be printed
 */

#endif
