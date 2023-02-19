#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int e, f, g;

	for (e = '0'; e < '9'; e++)
	{

	for (f = e + 1; f <= '9'; f++)
	{

	for (g = f + 1; g <= '9'; g++)
	{
	if ((f != e) != g)
	{
	putchar(e);
	putchar(f);
	putchar(g);
	if (e == '7' && f == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}


