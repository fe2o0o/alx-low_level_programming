#include <stdio.h>
/**
 * main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 65;

	while (ch <= 90)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
