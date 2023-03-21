#include "main.h"
#include <ctype.h>
/**
 * _islower - check alphabet is lowercase or not
 * @c: is a char to be checked
 * Return: always 1 (success)
 * return: always 0 (wrong)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
