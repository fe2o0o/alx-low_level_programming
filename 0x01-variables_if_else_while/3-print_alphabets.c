#include <stdio.h>
/**
 * main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 65;
	int m = 97;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (ch <= 90)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
