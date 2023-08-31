#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @b: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
