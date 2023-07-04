#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 *
 * @s: string
 * @accept: string to match
 *
 * Return: pointer to the byte in s that matches any one on accept
 *		or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int tr, etr;
	char *p;

	tr = 0;
	while (s[tr] != '\0')
	{
		etr = 0;
		while (accept[etr] != '\0')
		{
			if (accept[etr] == s[tr])
			{
				p = &s[tr];
				return (p);
			}
			etr++;
		}
		tr++;
	}

	return (0);
}
