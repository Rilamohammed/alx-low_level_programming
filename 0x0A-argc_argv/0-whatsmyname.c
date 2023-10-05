#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc, argv
 * @argc: the char to be filled
 * @argv: the size of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
