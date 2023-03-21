#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check if is a char
 * @c: is the value to be checked
 * Return: always 1 if is a letter upper or lower case. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
