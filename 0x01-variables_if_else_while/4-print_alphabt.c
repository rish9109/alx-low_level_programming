#include <stdio.h>
#include <stdlib.h>

/**
 * main prints letters except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z');
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
