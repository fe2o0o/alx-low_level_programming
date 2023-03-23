#include "main.h"
#include <ctype.h>
/**
 * _isupper- Check the letter if upper
 *@c: the letter will be chicked
 *Return: 1 if is upper or 0 for otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
