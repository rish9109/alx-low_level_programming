#include "main.h"

/**
 * _strcpy - string copy
 * @dest: Destination
 * @src: source value
 * Return: pointer to destination
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
