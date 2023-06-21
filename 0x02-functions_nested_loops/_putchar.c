#include <unistd.h>
#include <main.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 *    -1 (error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
