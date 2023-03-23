#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: parameter
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
