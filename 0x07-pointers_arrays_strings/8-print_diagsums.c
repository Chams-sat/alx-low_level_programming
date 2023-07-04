#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - description
 *
 * @a: 2D array of int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int tr, s1 = 0, s2 = 0;

	for (tr = 0; tr < size; tr++)
	{
		s1 += a[tr];
		s2 += a[size - tr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
