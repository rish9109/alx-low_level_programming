#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x==NULL)
		exit(98)
		
	return (x);
}
