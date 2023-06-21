#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: if `c` is lowercase return 1
 * otherwise returns 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
