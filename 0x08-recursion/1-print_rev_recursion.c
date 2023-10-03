/**
 * _print_rev_recursion - uses recursion to print string in reverse
 *
 * @s: char pointer
 * Return: Always 0.
*/

#include "main.h"

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
