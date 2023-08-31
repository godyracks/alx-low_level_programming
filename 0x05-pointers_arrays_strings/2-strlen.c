#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
