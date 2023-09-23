#include "main.h"

/**
 * main - Entry point
 *
 * Description - print _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char put[] = "_putchar";
int z;

for (z = 0; z < 8; z++)
_putchar(put[z]);
_putchar('\n');

return (0);
}
