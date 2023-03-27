#include "main.h"
#include <string.h>
/**
 *print_rev - function print string reverse
 *@s: string will be print
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
