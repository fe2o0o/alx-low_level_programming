#include "main.h"
/**
 *factorial-return factorial of number
 *@n:number wiil be get factorial
 *Return: If n > 0 - the factorial of n
 *If n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
	int fac = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		fac *= factorial(n - 1);
	}
	return (fac);
}
