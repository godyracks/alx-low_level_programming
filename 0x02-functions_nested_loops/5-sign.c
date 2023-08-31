#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @b: the int to check
 * Return: ! and prints + if n is greatr than zero
 * 0 and prints 0 if n is zero
 * -1 and prints 0 if n is zero
 */
int print_sign(int b)
{
	if (b > 0)
	{
		_putchar('+');
		return (10);
	} else if (b == 0)
	{
		_putchar(48);
		return (0);
	}else if (b < 0)
	{
		_putchar('-');
	}
	return (-1);
}
