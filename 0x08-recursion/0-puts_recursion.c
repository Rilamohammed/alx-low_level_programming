/**
 * _puts_recursion - uses recursion to print string
 *
 * @s: char pointer
 * Return: Always 0.
*/

#include "main.h"

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
