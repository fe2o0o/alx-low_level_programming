#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : 'last digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lsd;
	char s[15] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;
	if (lsd > 5)
	{
		printf("%s %d is %d and is greater than 5\n", s, n, lsd);
	}
	else if (lsd == 0)
	{
		printf("%s %d is %d and is 0\n", s, n, lsd);
	}
	else if (lsd < 6 && lsd != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", s, n, lsd);
	}
	return (0);
}
