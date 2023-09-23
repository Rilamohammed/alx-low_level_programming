#include "main.h"

/**
 *print_alphabet - prints alphabets
 *
*/

void print_alphabet(void)
{
char put[] = "abcdefghijklmnopqrstuzwxyz";
int z;

for (z = 0; z < 26; z++)
_putchar(put[z]);
_putchar('\n');
}
