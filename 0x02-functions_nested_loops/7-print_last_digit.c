#include "main.h"
/**
 * print_last_digit - print the last digit of n
 * @n: the value to be get the last didgit
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
