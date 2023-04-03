#include "main.h"
/**
 *_strspn -  that gets the length of a prefix substring.
 *@s: main string
 *@accept: string will be check
 *Return:the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
