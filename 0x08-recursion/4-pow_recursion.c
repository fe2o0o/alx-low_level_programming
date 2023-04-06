#include "main.h"
/**
*_pow_recursion - Returns the value of x raised to the power of y.
 *@x: base number
 *@y: power of
 *Return: power of number
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		res *= _pow_recursion(x , y-1);
	}
	return (res);
}
