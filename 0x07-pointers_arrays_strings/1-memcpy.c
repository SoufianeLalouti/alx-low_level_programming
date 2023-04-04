#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area of destination
 * @src: memory area of source
 * @n: number of bytes to copy from memory area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
