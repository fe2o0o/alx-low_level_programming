#include "main.h"
#include <ctype.h>
/**
 * _isupper- Check the letter if upper
 *@c:The letter will be checked
 * Return :1 for upper otherwise 0
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
