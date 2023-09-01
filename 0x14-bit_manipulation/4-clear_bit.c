#include "main.h"

/**
 * clear_bit - clear the bit at the index
 *
 * @n: the num to index
 * @index: the bit to clear
 *
 * Return: if success 1, if error -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
