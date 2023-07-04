#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int tr, etr;

	for (tr = 0; s[tr] != '\0'; tr++)
	{
		for (etr = 0; accept[etr] != s[tr]; etr++)
		{
			if (accept[etr] == '\0')
				return (tr);
		}
	}
	return (tr);
}
