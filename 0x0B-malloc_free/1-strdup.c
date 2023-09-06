#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
