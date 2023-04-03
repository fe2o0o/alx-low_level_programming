#include "main.h"
/**
 *_strspn -  that gets the length of a prefix substring.
 *@s: main string
 *@accept: string will be check
 *Return:the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] != '\0')
			{
				return (i);
			}
		}

	}
	return (i);
}
