#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	unsigned int r;
	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}

