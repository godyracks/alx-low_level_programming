#include "main.h"

/**
 * _strcpy - this fuction copy the pointer to variable.
 * @src: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * Return: d.
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
