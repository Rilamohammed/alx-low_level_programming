#include <stdio.h>

/**
 * main - Enty point                                                
 *                                                                 
 * Description: Displays alphabets                                  
 *                                                                 
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alph;

        for (alph = 'z'; alph >= 'a'; alph--)
	{
                putchar(alph);
	}
	putchar('\n');
	return (0);
}
