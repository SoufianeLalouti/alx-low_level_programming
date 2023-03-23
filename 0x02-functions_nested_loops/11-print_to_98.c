#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: first number
*Return: no return
*/
void print_to_98(int n)
{
	int count = 0;

	while (count == 0)
	{
		printf("%d", n);
		if (n == 98)
			count = 1;
		else
			printf(", ");
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("\n");
}
