#include <stdio.h>
#include <stdlib.h>

/**
 * main - array of chars
 * @argc: the char to be filled
 * @argv: the size of the array
 *
 * Return: The filled array
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 0; i < argc; i++)
{
sum += atoi(argv[i]);
}
{
printf("%d\n", (argc - 1));
return (0);
}
}
