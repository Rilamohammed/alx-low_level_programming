#include "main.h"
/*
 * *memset(char *s, char b, unsigned int n) - Mems function
*/

char *memset(char *s, char b, unsigned int n);
{
unsigned int x;

for (x = 0; n > 0; x++, n--)
{
s[x] = b;
}

return (s);
}
