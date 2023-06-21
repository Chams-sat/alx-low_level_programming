#include "main.h"

/**
 * _isalpha - checks if character is a letter in both cases
 *
 * @c: takes input from other functions
 *
 * Return: if c is character return 1
 *	else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
