#include <stdio.h>

/**
 * main - entry Point 
 *
 * Return:always 0
 */

int mian(void)
	{
	int a;

	for (a = 0; a <10; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
	}
