#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress "unused parameter" warning */

	/* Print the number of arguments (excluding the program name) */
	printf("%d\n", argc - 1);

	return (0);
}
