#include "main.h"
/**
 * _memcpy - a functions that copies memory area
 * @dest: the address of the memory
 * @n: the size of the memory
 * @src: the address to copy
 * Return: a pointer to dest
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
