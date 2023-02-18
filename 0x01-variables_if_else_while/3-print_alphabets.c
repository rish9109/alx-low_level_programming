#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabet upper and lower case
 *
 * Return: 0 Always
 */
int main(void)
{
	int ch = 'a';
	int ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
