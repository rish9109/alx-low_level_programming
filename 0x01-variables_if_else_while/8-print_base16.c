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
	int d;
	char ra;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (ra = 'a'; ra <= 'f'; ra++)
	putchar(ra);
	putchar('\n');

	return (0);
}

