#include <stdio.h>
#include <stdlib.h>

/**
 * main - array of chars
 * @argc: the char to be filled
 * @argv: the size of the array
 * Return: The filled array
 */

int main(int argc, char *argv[])
{
int i, p = 1;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
p = p *atoi(argv[i]);
}
{
printf("%d\n", p);
return (0);
}
}
else
{
printf("Error\n");
return (1);
}
}
