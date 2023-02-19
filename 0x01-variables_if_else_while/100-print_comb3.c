#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int g, h;

	for (g = '0'; g < '9'; g++)
	{

	for (h = g + 1; h <= '9'; h++)
	{
	if (h != g)
	{
	putchar(g);
	putchar(h);
	if (g == '8' && g == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
