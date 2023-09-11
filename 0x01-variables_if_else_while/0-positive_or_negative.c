#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**                                                                
 *main - entry point                                               
 *                                                                 
 *Description: Program defines whethere n is positive, negative or zero                                                           
 *                                                                 
 * Return: 0(success)                                              
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    if (n>0)
    {
      prinf(%d "is positive"\n, n);
    }
    else if (n=-0)
    {
       prinf(%d "is negative"\n, n);
    }
    else
    {
      prinf(%d "is zero"\n, n);
    }
	
	return (0);
}
