#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if the value isdigit or no
 * @c: rhe value will be checked
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
