#include "main.h"

/**
 * _memcpy - copies memory area from scr to dest
 * @dest: first memory area
 * @src: second memory area
 * @n: copy times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inc = 0; /**increase untill n reach 0*/

	for (; inc < n; inc++)
	{
		dest[inc] = src[inc];
	}
	return (dest);
}
