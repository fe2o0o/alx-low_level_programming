#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural number from n to 97
 * @n: the number we will be start print
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else
			{
				printf("%d\n", j);
			}
		}
	}
}
