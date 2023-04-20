#include "main.h"

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int b, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (b = num_index, k = dest_index; b >= 0; b--, k--)
	{
		mul = (n - '0') * (num[b] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void init(char *str, int l)
{
	int a;

	for (a = 0; a < l; a++)
		str[a] = '0';
	str[a] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *s;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ta = 0; e[ta]; ta++)
			_putchar(e[ta]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	s = malloc(ln * sizeof(char));
	if (s == NULL)
	{
		for (ta = 0; e[ta]; ta++)
			_putchar(e[ta]);
		exit(98);
	}
	init(s, ln - 1);
	for (ta = l2 - 1, a = 0; ta >= 0; ta--, a++)
	{
		t = mul(argv[2][ta], argv[1], l1 - 1, s, (ln - 2) - a);
		if (t == NULL)
		{
			for (ta = 0; e[ta]; ta++)
				_putchar(e[ta]);
			free(s);
			exit(98);
		}
	}
	_print(s, ln - 1);
	return (0);
}
