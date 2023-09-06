#include <unistd.h>
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1 is returned errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
