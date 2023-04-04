#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: The string that we need to get its lenght
 * Return: The lenght of @s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0';)
		i++;
	return (i);
}
