#include "main.h"
/**
 * swap_int - function it receive 2 vakue and swap it
 * @a: first value it will be swap
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
