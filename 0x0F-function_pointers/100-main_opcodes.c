#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%.2hhx", a[d]);
		if (d < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
