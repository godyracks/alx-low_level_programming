#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @b: the int to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int b)
{
	int a;

	if (b < 0)
		b = b;

	a = b % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
