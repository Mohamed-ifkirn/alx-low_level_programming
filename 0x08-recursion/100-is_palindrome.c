#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @a: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *a)
{
if (a[0] != '\0')
return (1 + _strlen_recursion(a + 1));
return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @a: string base address.
 * @i: left index.
 * @d: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *a, int i, int d)
{
if (s[i] == s[d])
if (i > d / 2)
return (1);
else
return (pal_checker(a, i + 1, d - 1));
else
return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @a: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *a)
{
return (pal_checker(a, 0, _strlen_recursion(a) - 1));
}
