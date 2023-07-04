#include "main.h"

/**
 * print_chessboard - function that work exatly like her name
 *
 * @a: rows
 *
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int tr, etr;

	for (tr = 0; tr < 8; tr++)
	{
		for (etr = 0; etr < 8; etr++)
		{
			_putchar(a[tr][etr]);
		}
		_putchar('\n');
	}
}
