#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int a;
	int b;
	char c;

	for (a = 0 ; s[a] != '\0' ;)
	{
		a++;
	}
	for (b = 0 ; b < a ; b++)
	{
		a--;
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		}
}
