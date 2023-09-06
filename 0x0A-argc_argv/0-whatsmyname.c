#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		/* Use the last element of argv (the program name) */
		char *programName = argv[argc - 1];

		/* Print the program name */
		printf("%s\n", programName);
	}

	return (0);
}
