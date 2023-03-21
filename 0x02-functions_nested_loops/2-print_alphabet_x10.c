#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
