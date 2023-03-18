#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int t;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (t = 0 ; t < 10 ; t++)
			{
				if (i < j && j < t)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(t + '0');
					if (i + j + t != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
