#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets ten times
 *
*/

void print_alphabet_x10(void)
{
char put[] = "abcdefghijklmnopqrstuvwxyz\n";
int z;
int y;

for (y = 0; y < 10; y++)
{
for (z = 0; z < 26; z++)
_putchar(put[z]);
_putchar('\n');
}
}
