#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
