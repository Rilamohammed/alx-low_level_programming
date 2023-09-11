#include <stdio.h>

/**
*
*main - Enty point 
*
*Description: Alphabets in small and capital
*
*Return: ALways 0 (success)
*/

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	char alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	int i, j;
	
	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');	
	
	for (j = 0; j < 26; j++)
	{
	putchar(alph[j]);
	}
return (0);
}
