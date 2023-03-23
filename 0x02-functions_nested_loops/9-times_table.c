#include "main.h"

/**
 * times_table -  prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
					_putchar(' ');
			}
			if (c >= 0 && c < 10)
				_putchar(c + '0');
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
