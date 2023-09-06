#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0; /* Reset len for the next argument */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * total_len + 1);

	if (concatenated == NULL)
		return (NULL);

	/* Copy arguments into the concatd str with newn separators */
	for (i = 0, j = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			concatenated[j++] = av[i][len];
		concatenated[j++] = '\n'; /* Add a newln char after each arg */
	}
	concatenated[j] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
