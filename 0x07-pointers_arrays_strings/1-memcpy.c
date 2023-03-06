#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src to memory area
 * dest
 *
 * @dest: This is the output string
 * @src: This is my input string
 * @n: This is the number bytes to copy
 *
 * Return: This is the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
