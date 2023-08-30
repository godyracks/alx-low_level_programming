#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output
 * @c: the character to print
 *
 * This function writes the character @c to the standard output, which
 * is usually the terminal window. It uses the write system call from
 * the unistd.h header file to write the character to file descriptor 1,
 * which is the file descriptor for standard output.
 *
 * Return: On success, the number of bytes written is returned (1).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
