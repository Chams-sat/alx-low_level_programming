#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 *
 * @n: integer
 *
 * Return: 1 if true, 0 if false
*/

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}


