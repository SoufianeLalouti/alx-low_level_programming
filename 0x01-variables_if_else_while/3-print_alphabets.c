#include <stdio.h>
/**
  *main - entry point
  *Description: printing lowercase then uppercase alphabet
  *Return: always 0
  */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
