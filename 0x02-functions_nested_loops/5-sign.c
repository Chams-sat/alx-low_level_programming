#include "main.h"

/**
 * print_sign - print + if `n` is greater then zero
 *	print 0 if `n` is equal to zero
 *	print - if `n` is less then zero
 *
 * @c: tackes integer type input for function
 *
 * Return: 1 if +and 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
