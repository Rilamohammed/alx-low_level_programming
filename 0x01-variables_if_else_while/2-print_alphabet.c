#include <stdio.h>

/**
*main - Enty point
*
*Description: Prints alphabets
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar (alphabets[i]);
	}
	return (0);
}
